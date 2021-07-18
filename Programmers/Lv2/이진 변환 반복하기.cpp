#include <string>
#include <vector>
#include <iostream>
using namespace std;
int number = 0;
string transform(string s){
    string binary= "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '1'){
            binary += '1';
        }else{
            number ++;
        }
    }
    int num = binary.size();
    binary = "";
    while(num > 0){
        char c = char(num % 2 + 48);
        binary = c + binary;
        num /= 2;
    }
    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    int temp = 0;
    while(s != "1"){
        temp ++;
        s = transform(s);
    }
    answer.push_back(temp);
    answer.push_back(number);
    
    return answer;
}
