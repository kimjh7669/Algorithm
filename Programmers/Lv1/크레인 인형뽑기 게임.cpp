#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int N = board.size();
    int idx = 0;
    int number = 0;
    vector <int> container;
    for(int i = 0; i<moves.size();i++){
        idx = 0;
        while(board[idx][moves[i]-1] == 0 && idx < N - 1){
            idx ++;
        }
        number = board[idx][moves[i]- 1];
        board[idx][moves[i] - 1] = 0;
        if(number != 0) {
            if(container.size() != 0 && container.back() == number){
                container.pop_back();
                answer += 2;
            }
            else{
                container.push_back(number);    
            }
        }        
    }
    return answer;
}
