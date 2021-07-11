#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int temp = 0;
    for(int i = 0;i<absolutes.size(); i++){
        if(signs[i] == true) temp = 1;
        else temp = -1;
        answer += absolutes[i] * temp;
    }
    return answer;
}
