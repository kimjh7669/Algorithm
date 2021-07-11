#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int N_stage[501] = {0};
typedef pair<int, float> ii;

bool compare(pair<int, double>&a, pair<int, double>&b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    sort(stages.begin(), stages.end());
    vector<pair<int, double>> percent; // 각 스테이지와 스테이지 실패율
    map<int, int> stagesClear; // 각 스테이지 별 머무는 인원
    int pCount = stages.size(); // 스테이지 클리어 인원수
    for(int j = 0; j<stages.size();j++) // 스테이지 클리어 인원수 분리
        stagesClear[stages[j]] ++;
    
    for(int i = 1; i<=N; i++){ // 1스테이지부터 N스테이지까지 순회
        if(!pCount || !stagesClear[i]) // 스테이지와 못깬인원/ 총 인원으로 나눔
            percent.push_back({i, 0});
        else
            percent.push_back({i, (double)stagesClear[i] / pCount});
        pCount-=stagesClear[i];
    }
    sort(percent.begin(), percent.end(), compare);
    for(auto p: percent)
        answer.push_back(p.first);
    return answer;
}
