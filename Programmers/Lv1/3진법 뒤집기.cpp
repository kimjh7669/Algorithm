#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    string reverse3 = "";
    
    while(true){
        reverse3 += to_string(n%3);
        n = n/3;
        if(n == 0) break;
    }
    
    for(int i = reverse3.size() - 1; i >=0 ; i--){
        answer += (reverse3[i] - 48) * pow(3, reverse3.size() - i -1);
    }
    

    return answer;
}
