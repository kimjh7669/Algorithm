#include <string>
#include <vector>
#include <iostream>
using namespace std;
int cur_state[10001];

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int cur_weight = 0;
    int cur_truck = 0;
    vector<int> contain;
    while(true){
        answer ++;
        if(cur_weight + truck_weights[cur_truck] <= weight && cur_truck < truck_weights.size()){
            cur_weight = cur_weight + truck_weights[cur_truck];
            contain.push_back(cur_truck);
            cur_truck ++;
        }
        if(contain.size() == 0){
            break;
        }
        for(int j = 0 ; j< contain.size(); j++){
            cur_state[contain[j]]++;
            if(cur_state[contain[j]] == bridge_length){
                cur_weight -= truck_weights[contain[j]];
                contain.erase(contain.begin() + j);
                j--;
            }
        }
            
    }
    
    return answer;
}
