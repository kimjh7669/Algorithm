#include <string>
#include <vector>
#include <iostream>
using namespace std;


vector<int> check(vector<vector<int>>& arr){
    int arr_length = arr.size();
    int num = arr[0][0];
    bool if_possible = true;
    vector <int> answer;
    answer.push_back(0);
    answer.push_back(0);

    for(int i = 0 ; i < arr_length; i++){
        for(int j = 0 ; j < arr_length; j++){
            if(arr[i][j]!=num){
                if_possible = false;
                break;
            }
        }
    }
    if(if_possible == true){
        if(num == 0){
            answer[0] += 1;
            return answer;   
        }
        else{
            answer[1] += 1;
            return answer;  
        } 
    }
    
    vector<vector<int>> arr1;
    vector<vector<int>> arr2;
    vector<vector<int>> arr3;
    vector<vector<int>> arr4;
    vector <int> temp1;
    vector <int> temp2;
    for(int i = 0 ; i < arr.size()/2 ; i++){
        auto const b = arr[i].cbegin();
        auto const m = b+(arr[i].size()+1)/2;
        auto const e = arr[i].cend();
        temp1.assign(b,m);
        temp2.assign(m,e);
        arr1.push_back(temp1);
        arr2.push_back(temp2);
    }
    for(int i = arr.size()/2 ; i < arr.size() ; i++){
        auto const b = arr[i].cbegin();
        auto const m = b+(arr[i].size()+1)/2;
        auto const e = arr[i].cend();
        temp1.assign(b,m);
        temp2.assign(m,e);
        arr3.push_back(temp1);
        arr4.push_back(temp2);
    }
    vector<int> answer1;
    vector<int> answer2;
    vector<int> answer3;
    vector<int> answer4;
    
    answer1 = check(arr1);
    answer2 = check(arr2);
    answer3 = check(arr3);
    answer4 = check(arr4);
    
    answer[0] += answer1[0];
    answer[0] += answer2[0];
    answer[0] += answer3[0];
    answer[0] += answer4[0];
    
    answer[1] += answer1[1];
    answer[1] += answer2[1];
    answer[1] += answer3[1];
    answer[1] += answer4[1];
        
    return answer;
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    
    
    answer = check(arr);
    // answer.push_back(answer1[0]);
    // answer.push_back(answer1[1]);
    return answer;
}
