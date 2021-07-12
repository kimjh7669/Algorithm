#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    int temp = 0;
    cout <<"arr1.size(): " << arr1.size() << endl;
    cout <<"arr2[0].size(): " << arr2[0].size() << endl;
    cout <<"arr1[0].size(): " << arr1[0].size() << endl;
    for(int i = 0; i<arr1.size();i++){
        vector<int> temp_arr;
        for(int j = 0;j<arr2[0].size();j++){
            temp = 0;
            for(int k = 0; k< arr1[0].size(); k++){
                temp += arr1[i][k] * arr2[k][j];
            }
            temp_arr.push_back(temp);
        }
        answer.push_back(temp_arr);
    }
    return answer;
}
