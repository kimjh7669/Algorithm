#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool check(string s){
    vector <char> temp;
    int length = 0;
    for(int i = 0 ; i < s.size() ; i ++){
        length = temp.size() - 1;
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            temp.push_back(s[i]);
        else if(temp.size() == 0){
            return false;
        }
        else if(s[i] == ')'){
            if(temp[temp.size()-1] == '(')
                temp.erase(temp.begin() + temp.size() -1 );
            else {return false;}
        }else if(s[i] == ']'){
            if(temp[temp.size()-1] == '[')
                temp.erase(temp.begin() + temp.size() -1 );
            else {return false;}
        }else if(s[i] == '}'){
            if(temp[temp.size()-1] == '{')
                temp.erase(temp.begin() + temp.size()-1);
            else {return false;}
        }
    }
    if(temp.size() == 0) return true;
    return false;
}

int solution(string s) {
    int answer = 0;
    string rotate_string;
    for(int i = 0 ; i <s.size(); i++){
        rotate_string = "";
        for(int j = i ; j<s.size(); j ++)
            rotate_string += s[j];
        for(int j = 0 ; j < i ; j++)
            rotate_string += s[j];
        if(check(rotate_string) == true) answer++;
    }
    return answer;
}
