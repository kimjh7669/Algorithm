#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int solution(string dirs) {
    int answer = 0;
    map <int, char> trajectory;
    char direction;
    int dir_idx = 0;
    int cur[2] = {5,5};
    int dir;
    int x, y;
    for(int i=0;i<dirs.size();i++){
        direction = dirs[i];
        if(direction=='L'){
            dir_idx = 0;
        }else if(direction=='R'){
            dir_idx = 1;
        }else if(direction=='D'){
            dir_idx = 2;
        }else if(direction=='U'){
            dir_idx = 3;
        }
        x = cur[0] + dx[dir_idx];
        y = cur[1] + dy[dir_idx];
        
        if(x>=0 && y>=0 && x<=10 && y<=10){
            if(dir_idx == 0){
                dir = 10000 + x*100 + y;
            }else if(dir_idx == 1){
                dir = 10000 + cur[0] * 100 + cur[1];
            }else if(dir_idx == 2){
                dir = 20000 + x*100 + y;
            }else if(dir_idx == 3){
                dir = 20000 + cur[0] * 100 + cur[1];
            }
            trajectory[dir] = direction;
            cur[0] = x;
            cur[1] = y;
        }
    }
    for(auto it:trajectory) cout << it.first << ' ' << it.second << endl;
    cout << dirs[0];
    answer = trajectory.size();
    return answer;
}
