#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int num;
    for(int i = 0 ; i<s.size(); i++){
        if(s[i]>= 65 && s[i] <=90){
            num = s[i] + n;
            if(num > 90) num -= 26;
            answer += char(num);
        }else if(s[i]>=97 && s[i] <=122){
            num = s[i] + n;
            if(num > 122) num -= 26;
            answer += char(num);
        }else answer += s[i];
    }

    return answer;
}
