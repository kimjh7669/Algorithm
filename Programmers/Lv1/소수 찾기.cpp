#include <string>
#include <vector>
#include <iostream>
using namespace std;
int prime[1000000] = {0};
int solution(int n) {
    int answer = 0;
    
    for(int i = 2; i<=n;i++){
        if(prime[i] == 0){
            answer++;
            for(int j = 1; j <= n/i; j++){
                prime[j * i] = 1;
            }
        }
    }
    

    return answer ;
}
