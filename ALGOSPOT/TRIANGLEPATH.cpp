#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstring>
#include <algorithm>

using namespace std;

int n, board[100][100], DP[100][100];

int main(void)
{       
        int C;
        int answer[50];
        cin >> C;
        for (int i = 0; i < C; i ++){
                cin >> n;
                memset(board, -1, sizeof(board));
                for(int by = 0; by < n; by++)
                        for ( int bx = 0; bx <= by ; bx++)
                                cin >> board[by][bx];
                DP[0][0] = board[0][0];
                answer[i] = 0;
                for(int by = 1; by < n; by++){
                        for (int bx = 0; bx <= by ; bx++){
                                if(bx == 0){
                                        DP[by][bx] = DP[by-1][bx] + board[by][bx];
                                }
                                else{
                                        DP[by][bx] = max(DP[by-1][bx], DP[by - 1][bx-1]) + board[by][bx];
                                }
                                if (answer[i] < DP[by][bx]){
                                        answer[i] = DP[by][bx]; 
                                }
                        }
                }
                memset(DP, -1, sizeof(DP));
        }

        for(int i = 0; i< C; i++){
                cout << answer[i] << endl;
        }
        return 0;
}
