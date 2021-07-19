#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    while(n != 0){
        if(n % 2 == 0){
            n /= 2;
        }else{
            n -= 1;
            ans ++;
        }
    }    
    
    return ans;
}
