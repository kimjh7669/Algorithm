#include <string>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int num = 0;
    int score[3] = {0};
    int idx = 0;
    for(int i = 0;i<dartResult.size();i++){
        if(dartResult[i] == 'S'){
            score[idx - 1] = score[idx - 1];
        }else if(dartResult[i] == 'D'){
            score[idx - 1] = score[idx - 1] * score[idx - 1];
        }else if(dartResult[i] == 'T'){
            score[idx - 1] = score[idx - 1] * score[idx - 1] * score[idx - 1];
        }else if(dartResult[i] == '*'){
            score[idx - 1] *= 2;
            if(idx > 1) score[idx-2] *= 2;
        }else if(dartResult[i] == '#'){
            score[idx - 1] = score[idx - 1] * (-1);
        }else if(dartResult[i] == '1'){
            if(dartResult[i+1] == '0'){
                score[idx] = 10;
                idx++;
                i++;
            }else{
                score[idx] = 1;
                idx++;            
            }
        }else{
            score[idx] = dartResult[i] - 48;
            idx++;
        }
    }
    for(int i = 0; i< 3;i++){
        answer += int(score[i]);
    }
    return answer;
}
