#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total = 0;
    for (long long i = 1; i<= count; i++){
        total += price*i;
    }
    if(total-money <0)
        return 0;
    answer = total-money;
    return answer;
}
