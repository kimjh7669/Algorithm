#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int Count0 = 0;
    int CountAnswer = 0;
    for(int i = 0;i<6;i++){
        if(lottos[i] == 0){
            Count0++;
        }
        else{
            for(int j = 0; j< 6; j++){
                if(lottos[i] == win_nums[j]) CountAnswer ++;
            }
        }
    }

    int A, B;
    if((6 - (CountAnswer + Count0) +1) > 6) A = 6;
    else A = (6 - (CountAnswer + Count0) +1);
    
    if((6 - CountAnswer+ 1) > 6) B = 6;
    else B = (6 - CountAnswer+ 1);
    
    answer.push_back(A);
    answer.push_back(B);
    return answer;
}
