#include <string>
#include <vector>
#include <iostream>
using namespace std;
int done[101];
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = progresses.size();
    int idx = 0;
    while(idx != n){
        for(int j = 0 ; j < n ; j++){
            progresses[j] += speeds[j];
            if(progresses[j] >= 100){
                done[j] = 1;
            }
        }
        int return_num = 0;
        if(done[idx] == 1){
            return_num ++;
            idx++;
            while(done[idx] == 1){
                return_num++;
                idx++;
            }
            answer.push_back(return_num);
        }
    }
    return answer;
}
