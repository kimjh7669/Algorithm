#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> del;
    for(int i = 0 ; i < s.size();i ++){
        if(del.size() !=0 ){
            if(del.top() == s[i]){
                del.pop();
            }else{
                del.push(s[i]);
            }
        }else{
            del.push(s[i]);
        }
        
    }
    if(del.size() == 0) answer = 1;
    return answer;
}
