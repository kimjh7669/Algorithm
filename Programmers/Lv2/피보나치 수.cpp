#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 1;
    int temp1 = 0;
    int temp2 = 1;
    if(n == 1 || n == 2) return 1;
    
    for(int i = 1; i<n;i++){
        answer = temp1 + temp2;
        answer = answer % 1234567;        
        temp1 = temp2;
        temp2 = answer;
    }
    return answer;
}
