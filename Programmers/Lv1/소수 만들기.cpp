#include <vector>
#include <iostream>
using namespace std;
int prime[3001] = {0};

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 2; i< 3001; i++){
        if(prime[i] == 0){
            for(int j = 2; j < 3001/i + 1; j++){
                prime[j*i] = 1;
            }
        }
    }
    for(int i = 0; i< nums.size()-2; i++){
        for(int j = i+ 1; j< nums.size()-1;j++){
            for(int k = j + 1; k<nums.size(); k++){
                if(prime[nums[i]+nums[j]+nums[k]] == 0) {
                    answer++;
                }
            }
        }
    }
    
    
    return answer;
}
