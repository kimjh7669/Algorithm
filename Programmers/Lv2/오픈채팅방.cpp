#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <map>
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

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> ans;
    map <string, string> ID;
    vector<string> temp_vec;
    string tmp;
    for(int i = 0 ; i <record.size(); i++){
        temp_vec = split(record[i], ' ');
        ID["Hello"] = "Hi";
        if(temp_vec[0] == "Enter"){
            answer.push_back(temp_vec[0] + " " + temp_vec[1]);
            ID[temp_vec[1]] = temp_vec[2];
        }else if(temp_vec[0] == "Leave"){
            answer.push_back(temp_vec[0] + " " + temp_vec[1]);
        }else if(temp_vec[0] == "Change"){
            ID[temp_vec[1]] = temp_vec[2];
        }
    }
    for(int i = 0 ; i < answer.size(); i++){
        temp_vec = split(answer[i], ' ');
        if(temp_vec[0] == "Enter"){
            tmp = ID[temp_vec[1]] + "님이 들어왔습니다.";
            ans.push_back(tmp);
        }else if(temp_vec[0] == "Leave"){
            tmp = ID[temp_vec[1]] + "님이 나갔습니다.";
            ans.push_back(tmp);
        }
        // for(auto it : temp_vec) cout << it << ' ';
    }
    return ans;
}

