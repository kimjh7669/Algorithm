#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    int DP[100001][4] = {0};
    int temp = 0;
    
    for(int i=0;i<4;i++){
        DP[0][i] = land[0][i];
    }
    for(int i=1;i<land.size();i++){
        for(int j=0;j<4;j++){
            temp = 0;
            for(int k=0;k<4;k++){
                if(j!=k){
                    if(temp < DP[i-1][k]) temp = DP[i-1][k];
                }
            }
            DP[i][j] = temp + land[i][j];
        }
    }
    for(int i=0;i<land.size();i++){
        for(int j=0;j<4;j++){
            cout << DP[i][j] << ' ';
        }
        cout << endl;
    }
    for(int i=0;i<4;i++){
        if(answer < DP[land.size() - 1][i])
            answer = DP[land.size() - 1][i];
    }
    return answer;
}
