#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map <string, int> dic;
    string word = "";
    int idx = 1;
    for(int i = 0; i< 26;i++){
        word = char(i + 65);
        dic[word] = idx++;
        
    }
    for(auto it:dic) cout << it.first << " " << it.second << endl;
    
    word = msg[0];
    if(msg.size() == 1) answer.push_back(dic[word]);
    string temp_word;
    for(int i=1;i<msg.size();i++){
        temp_word = word + msg[i];
        
        if(dic.count(temp_word) == 0){
            dic[temp_word] = idx++;
            answer.push_back(dic[word]);
            word = msg[i];
            if(i == msg.size()-1){
                answer.push_back(dic[word]);
            }
        }else{
            word = temp_word;
            if(i == msg.size()-1){
                answer.push_back(dic[word]);
            }
        }
    }
    return answer;
}


// if (m.count(key) ){}


