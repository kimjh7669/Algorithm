#include <string>
#include <vector>
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

vector<int> answer;
int visited[5][5];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int dfs(vector <string> places, int x, int y, int i, int dis){
    if(visited[x][y] == 1) return 0;
    if(places[x][y] == 'X') return 0;
    if(places[x][y] == 'P' && dis != 0){
        answer[i] = 0;
        return 0;
    }
    visited[x][y] = 1;
    for(int k = 0 ; k < 4; k++){
        int new_x = x + dx[k];
        int new_y = y + dy[k];
        if(new_x >= 0 && new_y >= 0 && new_x < 5 && new_y < 5 && dis <2){
            dfs(places, new_x, new_y, i, dis + 1);
        }
    }
    
    
    return 0;
}
vector<int> solution(vector<vector<string>> places) {
    int temp = 0;
    for(int i = 0 ; i < places.size(); i++){
        answer.push_back(1);
        for(int j = 0 ; j < 5; j++){
            for(int k = 0 ; k < 5; k++){
                memset(visited,0,sizeof(visited));
                if(places[i][j][k] == 'P')
                    dfs(places[i], j, k, i, 0);
            }
        }
    }
    
    
    return answer;
}
