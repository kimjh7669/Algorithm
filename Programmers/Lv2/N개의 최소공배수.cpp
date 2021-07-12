#include <string>
#include <vector>
#include <iostream>
using namespace std;
int gcd(int A, int B){
    int N;
    if(A % B != 0){
        N = gcd(B, A%B);
    }else N = B;
    return N;
}
int solution(vector<int> arr) {
    int answer = 1;
    int temp1 = arr[0];
    int temp2;
    int GCD = arr[0];

    for(int i = 1; i< arr.size(); i++){
        temp2 = arr[i];
        if(temp1 < temp2){
            int tmp = temp1;
            temp1 = temp2;
            temp2 = tmp;
        }
        GCD = gcd(temp1, temp2);
        temp1 = (temp1/GCD) * (temp2/GCD) * GCD;
    }
    answer = temp1;

    return answer;
}
