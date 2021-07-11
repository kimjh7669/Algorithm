#include <string>
#include <vector>
#include <iostream>
using namespace std;
int student[35];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cloth[31] = {0};

    for(auto it : lost) cloth[it-1]--;
    for(auto it : reserve) cloth[it-1]++;
    for(auto it : cloth) cout << it << " " ;
  
    if(cloth[0] == 0 || cloth[0] == 1) {
        answer ++;
    }
    if(cloth[0] == -1){
        
        if(cloth[1] == 1){
            cloth[1]--;
            cloth[0]++;
            answer++;
        }
    }
    
    for(int i = 1;i<n-1;i++){
        if(cloth[i] == 0 || cloth[i] == 1) {
            answer ++;
        }
        if(cloth[i] == -1){
            if(cloth[i-1] == 1){
                cloth[i-1]--;
                cloth[i]++;
                answer ++;
            }
            else if(cloth[i+1] == 1){
                cloth[i+1]--;
                cloth[i]++;
                answer++;
            }
        }
    }
    
    if(cloth[n-1] == 0 || cloth[n-1] == 1) {
        answer ++;
    }
    if(cloth[n-1] == -1){
        
        if(cloth[n-2] == 1){
            cloth[n-2]--;
            cloth[n-1]++;
            answer++;
        }
    }
    return answer;
}
