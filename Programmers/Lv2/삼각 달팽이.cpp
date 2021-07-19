#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<int> graph[n];
    int underbound = 0;
    int upperbound = n;
    int cur_num = 1;
    int iter = 0;
    while(underbound<upperbound){
        for(int i = underbound; i < upperbound - 1; i ++){
            graph[i].insert(graph[i].begin() + iter, cur_num); 
            cur_num ++;
        }
        for(int i = 0 ; i < upperbound - underbound; i++){
            graph[upperbound-1].insert(graph[upperbound-1].end() - iter, cur_num);
            cur_num++;
        }
        for(int i = upperbound-2; i > underbound; i--){
            graph[i].insert(graph[i].end() - iter, cur_num);
            cur_num++;
        }
        underbound += 2;
        upperbound -= 1;
        iter ++;
    }
    for(int i = 0 ; i < n ; i ++ ){
        for(int j = 0 ; j < graph[i].size() ; j++){
            answer.push_back(graph[i][j]);
        }
    }
    return answer;
}
