#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> already;
    char lastword = words[0][words[0].size() - 1];
    already.push_back(words[0]);
    bool if_answer = false;
    for(int i = 1 ; i < words.size(); i ++){
        if(std::find(already.begin(), already.end(), words[i]) != already.end() || lastword != words[i][0]){
            int person = i % n;
            int temp = i / n;
            answer.push_back(person + 1);
            answer.push_back(temp + 1);
            if_answer = true;
            break;
        }
        already.push_back(words[i]);
        string word = words[i];
        lastword = word[word.size() - 1];
    }
    if(if_answer == false){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}
