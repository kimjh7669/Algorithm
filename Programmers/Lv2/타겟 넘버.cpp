#include <string>
#include <vector>
#include <iostream>

using namespace std;

int sign[2] = {-1, 1};
int answer = 0;
int dfs(vector<int> numbers, int len_number, int target, int cur_i, int cur_num){
    for(int i = 0 ; i < 2; i++){
        if(len_number == cur_i+1){
            if(cur_num + numbers[cur_i] * sign[i] == target){
                answer++;
            }
            continue;
        }
        dfs(numbers, len_number, target, cur_i + 1, cur_num+numbers[cur_i]*sign[i]);        
    }
    return 0;
}

int solution(vector<int> numbers, int target) {
    int len_number = numbers.size();
    int cur_i = 0;
    int cur_num = 0;
    dfs(numbers, len_number, target, cur_i, cur_num);
    return answer;
}
