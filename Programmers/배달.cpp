#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
vector <pair<int,int>> graph[2001];
int visited[2001];
int K;
int answer = 0;

bool dfs(int N, int cur_dis){
    if(cur_dis > K) return false;
    if(visited[N] == -1) answer ++;
    visited[N] = cur_dis;
    for(int i ; i <graph[N].size(); i++){
        if(visited[graph[N][i].first] < cur_dis && visited[graph[N][i].first] != -1){
            continue;
        }else{
            if(cur_dis + graph[N][i].second<=K){
                dfs(graph[N][i].first, cur_dis + graph[N][i].second);
            }
        }
    }
    return false;
}

int solution(int N, vector<vector<int> > road, int a) {
    K = a;
    memset(visited, -1 , sizeof(visited));
    for(int i = 0 ; i < road.size(); i ++){
        graph[road[i][0]].push_back(make_pair(road[i][1], road[i][2]));
        graph[road[i][1]].push_back(make_pair(road[i][0], road[i][2]));
    }
    
    dfs(1, 0);
    return answer;
}
