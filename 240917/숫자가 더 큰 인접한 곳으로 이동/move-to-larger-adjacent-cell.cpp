#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int get_max_dir(vector<vector<int>> mat, int r, int c);

int n;

// 위, 아래, 왼, 오
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

vector<vector<int>> move(vector<vector<int>> mat, int sr, int sc){
    
    int r = sr, c = sc;
    while(true){
        cout << mat[r][c] << ' ';
        int next_dir = get_max_dir(mat, r, c);
        if(next_dir == -1){
            break;
        }
        r = r + dx[next_dir];
        c = c + dy[next_dir];
    }
    
    return mat;
}


int get_max_dir(vector<vector<int>> mat, int r, int c){
    int max = mat[r][c];
    int max_dir = -1;
    
    for(int dir = 0; dir < 4; dir++){
        int nx = r + dx[dir];
        int ny = c + dy[dir];
        if(InRange(nx, ny)){
            if(max < mat[nx][ny]){
                max = mat[nx][ny];
                max_dir = dir;
//                cout << max << ' ';
                return max_dir;
            }
        }
    }
    
    return max_dir;
}

int main() {
    int c, r;
    cin >> n >> r >> c;
    
    r--;
    c--;
    
    vector<vector<int>> mat(n, vector<int>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    
    move(mat, r, c);
    
    
    
    return 0;
}