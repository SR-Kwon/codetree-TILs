#include <iostream>
#include <vector>
using namespace std;

int a[2] = {1, 1};   // 아래 오른쪽
int b[2] = {-1, 1};  // 위 오른쪽
int c[2] = {-1, -1}; // 위 왼쪽
int d[2] = {1, -1};  // 아래 왼쪽

int get_max(vector<vector<int>>& mat, int n) {
    int max_sum = 0;

    // 출발점 (i, j)을 모든 셀에 대해 반복
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            for (int len_a = 1; len_a < n; len_a++) {
                for (int len_b = 1; len_b < n; len_b++) {
                    
                    // 출발점에서 각 방향으로 이동한 후의 위치
                    int x1 = i + len_a * a[0], y1 = j + len_a * a[1];
                    int x2 = x1 + len_b * b[0], y2 = y1 + len_b * b[1];
                    int x3 = x2 + len_a * c[0], y3 = y2 + len_a * c[1];
                    int x4 = x3 + len_b * d[0], y4 = y3 + len_b * d[1];
                    
                    // 경계
                    if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n &&
                        x2 >= 0 && x2 < n && y2 >= 0 && y2 < n &&
                        x3 >= 0 && x3 < n && y3 >= 0 && y3 < n &&
                        x4 == i && y4 == j) {

                        int current_sum = 0;

                        for (int k = 0; k < len_a; k++) {
                            current_sum += mat[i + k * a[0]][j + k * a[1]];
                        }

                        for (int k = 0; k < len_b; k++) {
                            current_sum += mat[x1 + k * b[0]][y1 + k * b[1]];
                        }

                        for (int k = 0; k < len_a; k++) {
                            current_sum += mat[x2 + k * c[0]][y2 + k * c[1]];
                        }

                        for (int k = 0; k < len_b; k++) {
                            current_sum += mat[x3 + k * d[0]][y3 + k * d[1]];
                        }

                        // 최대합 갱신
                        max_sum = max(max_sum, current_sum);
                    }
                }
            }
        }
    }
    
    return max_sum;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    cout << get_max(mat, n);

    return 0;
}