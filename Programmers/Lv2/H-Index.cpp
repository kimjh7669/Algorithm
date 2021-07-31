#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0; 
    sort(citations.begin(), citations.end());
    reverse(citations.begin(), citations.end());
    bool if_non_break = true;
    for(int i = 0 ; i < citations.size(); i++){
        if(citations[i] <= i){
            answer = i;
            if_non_break = false;
            break;
        }
    }
    if(if_non_break == true){
        answer = citations.size();
    }
    // for(auto it : citations) cout << it << ' ';
    return answer;
}
