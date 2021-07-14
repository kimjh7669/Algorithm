#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(') num ++;
        else if(s[i] == ')') num --;
        if(num < 0){
            answer = false;
            break;
        }
    }
    cout << num ;
    if(num != 0) answer = false;
    return answer;
}
