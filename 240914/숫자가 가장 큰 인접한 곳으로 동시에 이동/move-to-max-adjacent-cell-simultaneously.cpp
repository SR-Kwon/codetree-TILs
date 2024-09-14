#include <iostream>
#include <cstring>

using namespace std;

int n, m, t;
int matrix[21][21];     // 격자판 정보
int Cnt[21][21];        // 현재 구슬의 위치 정보
int nextCnt[21][21];    // 다음 시간 구슬 위치 정보

// 상, 하, 좌, 우 방향 벡터
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

// 구슬의 이동 및 충돌 처리
void Solve() {
    // 다음 구슬 위치를 저장할 배열 초기화
    memset(nextCnt, 0, sizeof(nextCnt));

    // 현재 구슬 위치에서 이동을 시뮬레이션
    for (int iRow = 1; iRow <= n; ++iRow) {
        for (int iCol = 1; iCol <= n; ++iCol) {
            if (Cnt[iRow][iCol]) {  // 현재 위치에 구슬이 있는 경우
                int maxNum = -1;
                int nextY = iRow, nextX = iCol;  // 이동할 위치를 현재 위치로 초기화

                // 상하좌우로 이동 가능한 곳 중 가장 큰 숫자 찾기
                for (int iCnt = 0; iCnt < 4; ++iCnt) {
                    int ny = iRow + dy[iCnt];
                    int nx = iCol + dx[iCnt];

                    // 범위 내에 있고, 더 큰 값을 가진 위치 찾기
                    if (ny >= 1 && nx >= 1 && ny <= n && nx <= n && maxNum < matrix[ny][nx]) {
                        maxNum = matrix[ny][nx];
                        nextY = ny;
                        nextX = nx;
                    }
                }

                // 구슬 이동
                ++nextCnt[nextY][nextX];
            }
        }
    }

    // 충돌 처리: 2개 이상의 구슬이 모인 위치는 구슬이 사라짐
    for (int iRow = 1; iRow <= n; ++iRow) {
        for (int iCol = 1; iCol <= n; ++iCol) {
            if (nextCnt[iRow][iCol] > 1) {
                nextCnt[iRow][iCol] = 0;  // 충돌 시 구슬 제거
            }
        }
    }

    // 다음 상태를 현재 상태로 갱신
    memcpy(Cnt, nextCnt, sizeof(Cnt));
}

int main() {
    // 입력 처리
    cin >> n >> m >> t;

    // 격자 정보 입력
    for (int iRow = 1; iRow <= n; ++iRow) {
        for (int iCol = 1; iCol <= n; ++iCol) {
            cin >> matrix[iRow][iCol];
        }
    }

    // 구슬의 초기 위치 입력
    for (int iCnt = 0; iCnt < m; ++iCnt) {
        int r, c;
        cin >> r >> c;
        Cnt[r][c] = 1;  // 구슬의 위치를 1로 표시
    }

    // t초 동안 시뮬레이션 실행
    while (t--) {
        Solve();
    }

    // 최종적으로 남아있는 구슬의 수 계산
    int res = 0;
    for (int iRow = 1; iRow <= n; ++iRow) {
        for (int iCol = 1; iCol <= n; ++iCol) {
            if (Cnt[iRow][iCol]) ++res;
        }
    }

    // 결과 출력
    cout << res << endl;

    return 0;
}