#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();
    int divede2 = len /2 ;
    if(len % 2 == 0){
        answer = s[divede2-1];
        answer += s[divede2];
    }
    else answer = s[divede2];
    
    return answer;
}
