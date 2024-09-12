// 그냥 해당위치를 다 0 으로 만들어 주고 중력을 먹이자.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
// 위, 아래, 왼, 오
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

vector<vector<int>> bomb(vector<vector<int>> mat, int r, int c){
    int times = mat[r][c];  // 폭탄 범위
    mat[r][c] = 0;

    // 상하좌우 4방향으로 폭탄 범위 만큼 터뜨림
    for(int dir = 0; dir < 4; dir++){
        for(int t = 1; t < times; t++){
            int nx = r + dx[dir] * t;
            int ny = c + dy[dir] * t;
            if(InRange(nx, ny)){
                mat[nx][ny] = 0;
            }
        }
    }
    
    return mat;
}

// 중력
vector<vector<int>> grav(vector<vector<int>> mat) {
    vector<vector<int>> temp_mat(n, vector<int>(n, 0));
    
    for(int c = 0; c < n; c++){
        queue<int> temp;
        for(int r = 0; r < n; r++){
            if (mat[r][c] != 0){
                temp.push(mat[r][c]);
            }
        }
        // 큐에서 뽑아내어 아래에서부터 채워 넣음
        for(int i = n - int(temp.size()); i < n; i++){
            if (!temp.empty()) {
                temp_mat[i][c] = temp.front();
                temp.pop();
            }
        }
    }
    
    return temp_mat;
}

int main() {
    cin >> n;
    
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    
    int r, c;
    cin >> r >> c;
    r--;
    c--;
    
    mat = bomb(mat, r, c);
    
    mat = grav(mat);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}