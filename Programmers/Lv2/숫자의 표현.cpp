#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp;
    for(int i = n; i>0;i--){
        temp = 0;
        for(int j = i; j > 0; j--){
            temp += j;
            if(temp == n){
                answer ++;
                break;
            }
        }
    }
    return answer;
}
