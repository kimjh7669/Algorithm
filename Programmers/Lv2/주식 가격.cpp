#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    bool if_possible = false;
    for(int i = 0 ; i< prices.size() ; i++){
        if_possible = false;
        for(int j = i+1;j<prices.size();j++){
            if(prices[i] > prices[j]){
                answer.push_back(j-i);
                if_possible = true;
                break;
            }
        }
        if(if_possible == false){
            answer.push_back(prices.size()-i - 1);
        }
    }
    return answer;
}
