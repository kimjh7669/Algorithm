#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    vector <string> split_str;
    int score = 0;
    int temp_score = 0;
    for(int i = 0 ; i<table.size() ; i++){
        split_str = split(table[i], ' ');
        temp_score = 0;
        for(int j = 1 ; j < split_str.size(); j++){
            for(int k = 0 ; k < languages.size(); k ++){
                if(split_str[j] == languages[k]){
                    temp_score += preference[k] * (table.size() - j + 1);
                    
                }
            }
        }cout << endl;
        if(score < temp_score){
            score = temp_score;
            answer = split_str[0];
        }else if(score == temp_score){
            answer += " " + split_str[0];
        }
    }
    split_str = split(answer, ' ');
    sort(split_str.begin(), split_str.end());
    
    return split_str[0];
}
