#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }
    
    int num = arr[0];
    int idx = 0;
    for(int i =1; i<arr.size();i++){
        if (num >= arr[i]){
            num = arr[i];
            idx = i;
        }
    }
    arr.erase(arr.begin()+ idx);
    return arr;
}
