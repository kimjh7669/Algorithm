#include <string>
#include <vector>

using namespace std;

int solution(int data) {
    long answer = 0;
    long num = data;
    while(num !=1){
        num = num % 2 == 0 ? num / 2 : num * 3 + 1;
        answer += 1;
        if(answer > 500){
            answer = -1;
            break;
        }
    }
    return answer;
}
