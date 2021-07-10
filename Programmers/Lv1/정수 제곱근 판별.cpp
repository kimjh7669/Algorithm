#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long num = 1;
    while(num * num <= n + 1){
        if(num * num == n){
            return (num + 1) * (num + 1);
        }
        num += 1;
    }
    return -1;
}
