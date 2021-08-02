#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int half = brown/2;
    for(int i = 2; i <= half/2; i++){
        int j = half - i;
        if((i-1) * (j-1) == yellow) {
            answer.push_back(j+1);
            answer.push_back(i+1);
            break;
        }
        
    }
    return answer;
}
