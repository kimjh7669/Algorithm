#include <string>
#include <vector>
#include <iostream>

using namespace std;

string to_N(int number, int N){
    string ret = "";
    string tmp = "";
    if(number == 0) return "0";
    while(number>0){
        if(number% N == 10)  tmp = 'A';
        else if(number%N == 11) tmp = 'B';
        else if(number%N == 12) tmp = 'C';
        else if(number%N == 13) tmp = 'D';
        else if(number%N == 14) tmp = 'E';
        else if(number%N == 15) tmp = 'F';
        else tmp = to_string(number % N);
        ret = tmp + ret;
        number /= N;
    }
    return ret;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string string_N;
    string temp = "";
    int t_idx = 0;
    int add_idx = 0;
    bool if_break = false;
    for(int i = 0 ;; i++){
        string_N = to_N(i, n);
        for(int j = 0; j<string_N.size(); j++){
            temp = temp + string_N[j];
            add_idx++;
            if(add_idx == p + m*t_idx){
                if(t_idx == t) {
                    if_break = true;
                    break;
                }
                answer += string_N[j];
                t_idx ++;
            }
        }
        if(if_break == true) break;
    }
    cout << temp;
    int idx = 0;
    // for(int i = p - 1 ; idx < t; i = i + m){
    //     answer += temp[i];
    //     idx ++;
    // }
    cout << endl << answer ;
    return answer;
}
