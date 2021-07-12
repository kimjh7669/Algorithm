#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    
    for(int i = 0;i<s.size(); i++){
        answer = answer + (char)tolower(s[i]);
    }
    string answer_ = "";
    
    for(int i = 0; i<s.size(); i++){
        if(answer[i] == ' '){
            idx = 0;  
            answer_ = answer_ + ' ';
        } 
        else if(idx == 0){
            answer_ = answer_ + (char)toupper(answer[i]);   
            idx ++;
        }else{
            answer_ = answer_ + answer[i];
            idx ++;
            
        }
    }
    return answer_;
}
