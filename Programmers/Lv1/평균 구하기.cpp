#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double N = 0;
    for(int i = 0; i< arr.size(); i ++){
        N += arr[i];
    }

    answer = N / arr.size();
    return answer;
}
