#include <iostream>
#include <vector>
using namespace std;

// 블럭을 격자판에 떨어뜨리는 함수
vector<vector<int>> down(vector<vector<int>> mat, int n, int m, int k) {
    int row = n - 1; // 블럭이 내려갈 수 있는 가장 아래 행
    // k번째 열부터 k+m-1번째 열까지의 공간을 탐색
    for (int i = 0; i < n; i++) {
        bool canPlace = true;
        // 블럭이 내려갈 수 있는지 확인
        for (int j = k; j < k + m; j++) {
            if (mat[i][j] == 1) {
                row = i - 1; // 충돌했으므로 바로 위 행이 블럭이 놓일 수 있는 행
                canPlace = false;
                break;
            }
        }
        if (!canPlace) break; // 더 이상 아래로 갈 수 없으므로 탐색 중단
    }

    // row 위치에 블럭을 놓음
    for (int j = k; j < k + m; j++) {
        mat[row][j] = 1;
    }

    return mat;
}

int main() {
    int n, m, k;
    
    // 입력 받기
    cin >> n >> m >> k;
    k--; // 0-based index로 맞추기 위해 k를 감소
    
    vector<vector<int>> mat(n, vector<int>(n));
    
    // 격자판 정보 입력
    for (int i = 0; i < n; i++) {
        for (int t = 0; t < n; t++) {
            cin >> mat[i][t];
        }
    }
    
    // 블럭을 떨어뜨린 후의 격자판 상태 계산
    mat = down(mat, n, m, k);
    
    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int t = 0; t < n; t++) {
            cout << mat[i][t] << " ";
        }
        cout << endl;
    }
    
    return 0;
}