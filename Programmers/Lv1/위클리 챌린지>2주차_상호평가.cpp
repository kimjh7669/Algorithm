#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

double sum[11];
vector<int> temp_score;
double average[11];
string solution(vector<vector<int>> scores) {
    string answer = "";
    int divide_num;
    for(int i = 0 ; i<scores.size(); i++){
        temp_score.clear();
        divide_num = scores.size();
        for(int j = 0 ; j<scores.size();j++){
            sum[i] += scores[j][i];
            temp_score.push_back(scores[j][i]);
        }
        if(temp_score[i] == *max_element(temp_score.begin(), temp_score.end()) || temp_score[i] == *min_element(temp_score.begin(), temp_score.end())){
            if(count(temp_score.begin(), temp_score.end(), temp_score[i]) == 1){
                divide_num --;
                sum[i] -= temp_score[i];
            }
        }
        average[i] = sum[i]/divide_num;
    }
    for(int i = 0; i < scores.size(); i++){
        if(average[i] >= 90) answer += 'A';
        else if(average[i] >= 80) answer += 'B';
        else if(average[i] >= 70) answer += 'C';
        else if(average[i] >= 50) answer += 'D';
        else  answer += 'F';        
    }
    return answer;
}
