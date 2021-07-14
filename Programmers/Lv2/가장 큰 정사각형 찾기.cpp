#include<iostream>
#include<vector>
#include<tuple>

using namespace std;
void showPair(pair<int, int> input);//pair 출력 함수

tuple<int,int,int> DP[1000][1000];
int solution(vector<vector<int>> board)
{
    int answer = 0;
    int width = 0;
    int height = 0;
    int length = 0;
    int pre_length = 0;
    if(board.size() == 1 || board[0].size() == 1) return 1;
    if(board[0][0] == 0)
        DP[0][0] = make_tuple(0,0,0);   
    else
        DP[0][0] = make_tuple(1,1,1);
        
    
    for(int i = 0 ; i < board.size() ; i++){
        for(int j = 0 ; j < board[0].size() ; j++){
            if(i==0&&j==0) continue;
            if(board[i][j] == 0){
                DP[i][j] = make_tuple(0,0,0);
            }else{
                if(i == 0){
                    width = 1;
                    height = get<1>(DP[i][j-1])+ 1;
                    pre_length = 1;
                }
                else if(j == 0){
                    width = get<0>(DP[i-1][j]) + 1;
                    height = 1;
                    pre_length = 1;
                }else{
                    width = get<0>(DP[i-1][j]) + 1;
                    height = get<1>(DP[i][j-1])+ 1;
                    pre_length = get<2>(DP[i-1][j-1]) + 1;
                }
                length = (width < height)?width:height;
                length = (length < pre_length)?length:pre_length;
                DP[i][j] = make_tuple(width, height,length);
                
                answer = (answer > length)?answer:length;
            }
            
            
        }
    }
    
    
    return answer * answer;
}
