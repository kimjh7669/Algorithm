#include<vector>
#include<queue>
#include<iostream>
using namespace std;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int visited[101][101];
vector<vector<int>> maps;
int bfs(int x, int y, int sizex, int sizey){
    int nx, ny;
    queue<pair<int,int>> q;
    q.push(make_pair(x, y));
    visited[x][y] = 1;
    while(q.empty() != 1){
        int newx = q.front().first;
        int newy = q.front().second;
        q.pop();
        for(int i = 0 ; i < 4 ; i ++){
            nx = newx + dx[i];
            ny = newy + dy[i];
            if(nx >= 0 && ny >= 0 && nx < sizex && ny < sizey){
                if(visited[nx][ny] == 0 && maps[nx][ny] == 1){
                    q.push(make_pair(nx,ny));
                    visited[nx][ny] = visited[newx][newy] + 1;
                }
            }
        }
    }
     
    return 0;
}

int solution(vector<vector<int>> map)
{
    maps = map;
    int answer = 0;
    int sizex = maps.size();
    int sizey = maps[0].size();
    bfs(0,0, sizex, sizey);
    if(visited[sizex-1][sizey-1] == 0)
        answer = -1;
    else
        answer = visited[sizex-1][sizey-1];
        
    
    return answer;
}
