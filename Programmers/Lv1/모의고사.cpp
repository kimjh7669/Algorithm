#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int giveup1[5] = {1,2,3,4,5};
    int giveup2[8] = {2,1,2,3,2,4,2,5};
    int giveup3[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int num_ans1 = 0;
    int num_ans2 = 0;
    int num_ans3 = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == giveup1[i % 5]) num_ans1++;
        if(answers[i] == giveup2[i % 8]) num_ans2++;
        if(answers[i] == giveup3[i % 10]) num_ans3++;
    }
    
    int max_num = 0;
    max_num = max(max_num, num_ans1);
    max_num = max(max_num, num_ans2);
    max_num = max(max_num, num_ans3);
    
    if(num_ans1 == max_num) answer.push_back(1);
    if(num_ans2 == max_num) answer.push_back(2);
    if(num_ans3 == max_num) answer.push_back(3);
    
    return answer;
}
