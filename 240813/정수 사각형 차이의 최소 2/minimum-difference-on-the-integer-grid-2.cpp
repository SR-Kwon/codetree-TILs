#include <iostream>
#define MAX_N 100

using namespace std;

int N;
pair<int, int> DP[MAX_N][MAX_N];
int board[MAX_N][MAX_N];

int absolute(pair<int, int> num){
    return abs(num.second - num.first);
}

int main() {
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> board[i][j];
            // initialize DPh, DPl
        }
    }
    // initialize DP
    // row에 대해서 초기화
    DP[0][0] = {board[0][0], board[0][0]};
    for(int i = 1 ; i < N ; i++){
        int low = DP[0][i-1].first, high = DP[0][i-1].second;
        if(board[0][i] < low){
            DP[0][i] = {board[0][i], high};
        }
        else if(board[0][i] > high){
            DP[0][i] = {low, board[0][i]};
        }
        else{
            DP[0][i] = DP[0][i-1];
        }

        if(board[i][0] < low){
            DP[i][0] = {board[i][0], high};
        }
        else if(board[i][0] > high){
            DP[i][0] = {low, board[i][0]};
        }
        else{
            DP[i][0] = DP[i-1][0];
        }
    }
    for(int i = 1 ; i < N ; i++){
        for(int j = 1 ; j < N ; j++){
            // board[i][j]가 들어갔을 때, 위쪽에서 받아오는 것과 아래쪽에서 받아오는 것 중 절대값이 더 작은것으로 선택한다.
            pair<int, int> upper = DP[i-1][j], lower = DP[i][j-1];

            // update upper and lower when board[i][j] is in.
            if(board[i][j] < upper.first){
                upper = {board[i][j], upper.second};
            }
            else if(board[i][j] > upper.second){
                upper = {upper.first, board[i][j]};
            }
            
            if(board[i][j] < lower.first){
                lower = {board[i][j], lower.second};
            }
            else if(board[i][j] > lower.second){
                lower = {lower.first, board[i][j]};
            }
            int upper_abs = absolute(upper), lower_abs = absolute(lower);
            if(upper_abs < lower_abs){
                DP[i][j] = upper;
            }else if (upper_abs > lower_abs){
                DP[i][j] = lower;
            }else{
                if(upper.second < lower.second){
                    DP[i][j] = upper;
                }else{
                    DP[i][j] = lower;
                }
            }
        }
    }
    // for(int i = 0 ; i < N ; i++){
    //     for(int j = 0 ; j < N ; j++){
    //         cout << '{' << DP[i][j].first << ", " << DP[i][j].second << "} ";
    //     }cout << '\n';
    // }
    cout << absolute(DP[N-1][N-1]);
    return 0;
}