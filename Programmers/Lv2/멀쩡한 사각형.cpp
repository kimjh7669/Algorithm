#include <iostream>
using namespace std;

long long gcd(int A, int B){
    long long C;
    while(B != 0){
        C = A%B;
        A = B;
        B = C;
    }
    return A;
}

long long solution(int w,int h) {
    long long answer = 1;
    answer = (long long)w * (long long)h - (w+h);
    answer += gcd(w,h);    
    return answer;
}
