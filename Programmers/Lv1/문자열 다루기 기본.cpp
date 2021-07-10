#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size() != 4 && s.size() != 6) return false;

    for(int i = 0;i <s.size();i++){
        if(s[i]<48 || s[i] > 59) return false;
    }
    return answer;
}
