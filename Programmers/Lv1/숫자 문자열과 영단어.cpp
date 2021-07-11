#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp_ans = "";
    for(int i = 0 ; i < s.size(); i++){
        if(s[i]>=48 && s[i] <= 57) temp_ans = temp_ans + s[i];
        if(s[i] == 'z'){
            temp_ans = temp_ans + '0';
            i = i + 3;
        }
        else if(s[i] == 'o'){
            temp_ans = temp_ans + '1';
            i = i + 2;
        }
        else if(s[i] == 't'){
            if(s[i+1] == 'w'){
                temp_ans = temp_ans + '2';
                i = i + 2;
            }else{
                temp_ans = temp_ans + '3';
                i = i + 4;
            }
        }
        else if(s[i] == 'f'){
            if(s[i+1] == 'o'){
                temp_ans = temp_ans + '4';
                i = i + 3;
            }else{
                temp_ans = temp_ans + '5';
                i = i + 3;
            }
        }
        else if(s[i] == 's'){
            if(s[i+1] == 'i'){
                temp_ans = temp_ans + '6';
                i = i + 2;
            }else{
                temp_ans = temp_ans + '7';
                i = i + 4;
            }
        }
        else if(s[i] == 'e'){
            temp_ans = temp_ans + '8';
            i = i + 4;
        }
        else if(s[i] == 'n'){
            temp_ans = temp_ans + '9';
            i = i + 3;
        }
    }
    
    
    
    
    
    
    
    for(int i = 0; i< temp_ans.size(); i++){
        answer += (temp_ans[i]- 48) * pow(10, temp_ans.size() - i-1);
    }
    return answer;
}
