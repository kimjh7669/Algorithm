#include<iostream>
#include<string.h>

using namespace std;
int DP[101][101];
int worktime[101][101];
int movetime[101][101][101];
int min_num[101][2];
int main(int argc, char** argv)
{
    fill(&DP[0][0], &DP[101][101], 10000001);
    int K, N;
    cin >> K >> N;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < K ; j ++){
            cin >> worktime[i][j];
            if(i == 0){
                DP[i][j] = worktime[i][j];
            }
        }
        for(int j = 0 ; j < K ; j ++){
            for(int k = 0; k < K;k++){
                if(k==j) continue;
                cin >> movetime[i][j][k];
            }            
        }
    }



    for(int i = 1 ; i < N ; i++){
        for(int j = 0 ; j < K ; j++){
            for(int k = 0 ; k < K ; k++){
                if(DP[i][j] > DP[i-1][k] + movetime[i-1][k][j] + worktime[i][j]){
                    DP[i][j] = DP[i-1][k] + movetime[i-1][k][j] + worktime[i][j];
                }
                    
            }
        }
    }
    
    int answer = 10000001;
    for(int i = 0 ; i < K ; i++){
        if(answer > DP[N-1][i])
            answer = DP[N-1][i];
    }
    cout << answer << endl;
    return 0;
}
