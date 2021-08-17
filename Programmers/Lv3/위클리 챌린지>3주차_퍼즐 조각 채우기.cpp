#include <string>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;
int answer = 0;
int visited[51][51];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<vector<int>> _rotate(vector<vector<int>> &key){
    int m = key.size();
    vector<vector<int>> temp(m, vector<int>(m, 0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            temp[i][j] = key[m - j - 1][i];
        }
    }
    return temp;
}

vector<vector<int>> game_board;
vector<vector<int>> shape;
vector<vector<int>> table_shape;
vector<vector<int>> table;
vector<vector<int>> table_90;
vector<vector<int>> table_180;
vector<vector<int>> table_270;

vector<vector<int>> dfs(int i, int j, int num, int ai, int aj){
    vector<int> temp;
    temp.push_back(ai - i);
    temp.push_back(aj - j);
    shape.push_back(temp);
    game_board[ai][aj] = 1;
    for(int k = 0;k<4;k++){
        int nx = dx[k] + ai;
        int ny = dy[k] + aj;
        if(nx >= 0 && ny >= 0 && nx < num && ny < num){
            if(game_board[nx][ny] == 0)
                shape = dfs(i, j, num, nx, ny);
        }
    }
    return shape;
}

vector<vector<int>> table_dfs(vector<vector<int>> table1, int i, int j, int num, int ai, int aj){
    vector<int> temp;
    temp.push_back(ai - i);
    temp.push_back(aj - j);
    table_shape.push_back(temp);
    table1[ai][aj] = 0;
    visited[ai][aj] = 1;
    for(int k = 0;k<4;k++){
        int nx = dx[k] + ai;
        int ny = dy[k] + aj;
        if(nx >= 0 && ny >= 0 && nx < num && ny < num){
            if(table1[nx][ny] == 1 && visited[nx][ny] == 0)
                table1 = table_dfs(table1, i, j, num, nx, ny);
        }
    }
    return table1;
}

int calsize = 0;
int cal_size(vector<vector<int>> table, int num, int i, int j){
    visited[i][j] = 1;
    calsize ++;
    for(int k = 0;k<4;k++){
        int nx = dx[k] + i;
        int ny = dy[k] + j;
        if(nx >= 0 && ny >= 0 && nx < num && ny < num){
            if(table[nx][ny] == 1 && visited[nx][ny] == 0)
            cal_size(table, num, nx, ny);
        }
    }
        
    return 0;
}

int compare_size(int num){
    vector<vector<int>> temp;
    for(int i = 0 ; i <num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(table[i][j] == 0) continue;
            memset(visited,0,sizeof(visited));
            calsize = 0;
            cal_size(table, num, i, j);
            if(shape.size() == calsize){
                memset(visited,0,sizeof(visited));
                table_shape.clear();
                temp = table_dfs(table, i, j, num, i, j);
                if(shape == table_shape){
                    answer += calsize;
                    // cout << "table" << endl;
                    // for(int k = 0 ; k< table.size();k++){
                    //     for(int p = 0 ; p <table[0].size(); p++){
                    //         cout << table[k][p] << ' ';
                    //     }cout << endl;
                    // }cout << endl;
                    table = temp;
                    // cout << "i: " << i << ", j: " << j << endl;
                    
                    return 1;
                }
            }
        }
    }
    return 0;
}

int compare_size90(int num){
    vector<vector<int>> temp;
    for(int i = 0 ; i <num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(table_90[i][j] == 0) continue;
            memset(visited,0,sizeof(visited));
            calsize = 0;
            cal_size(table_90, num, i, j);
            if(shape.size() == calsize){
                memset(visited,0,sizeof(visited));
                table_shape.clear();
                temp = table_dfs(table_90, i, j, num, i, j);
                if(shape == table_shape){
                    answer += calsize;
                    table_90 = temp;
                    // cout << "90i: " << i << ", j: " << j << endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}
int compare_size180(int num){
    vector<vector<int>> temp;
    for(int i = 0 ; i <num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(table_180[i][j] == 0) continue;
            memset(visited,0,sizeof(visited));
            calsize = 0;
            cal_size(table_180, num, i, j);
            if(shape.size() == calsize){
                memset(visited,0,sizeof(visited));
                table_shape.clear();
                temp = table_dfs(table_180, i, j, num, i, j);
                if(shape == table_shape){
                    answer += calsize;
                    table_180 = temp;
                    // cout << "180i: " << i << ", j: " << j << endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}
int compare_size270(int num){
    vector<vector<int>> temp;
    for(int i = 0 ; i <num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(table_270[i][j] == 0) continue;
            memset(visited,0,sizeof(visited));
            calsize = 0;
            cal_size(table_270, num, i, j);
            if(shape.size() == calsize){
                memset(visited,0,sizeof(visited));
                table_shape.clear();
                temp = table_dfs(table_270, i, j, num, i, j);
                if(shape == table_shape){
                    answer += calsize;
                    table_270 = temp;
                    // cout << "270i: " << i << ", j: " << j << endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int solution(vector<vector<int>> game_boar, vector<vector<int>> tabl) {
    game_board = game_boar;
    
    table = tabl;
    table_90 = _rotate(table);
    table_180 = _rotate(table_90);
    table_270 = _rotate(table_180);
    
    int num = game_board.size();
    for(int i = 0 ; i <num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(game_board[i][j] == 1) continue;
            
            table_90 = _rotate(table);
            table_180 = _rotate(table_90);
            table_270 = _rotate(table_180);
            shape.clear();
            dfs(i, j, num, i, j);
            // for(int k = 0 ; k< shape.size();k++){
            //     for(int p = 0 ; p <shape[0].size(); p++){
            //         cout << shape[k][p] << ' ';
            //     }cout << endl;
            // }cout << endl;
            
            if(compare_size(num)){
                // answer++;
            } 
            else if(compare_size90(num)){
                table_180 = _rotate(table_90);
                table_270 = _rotate(table_180);
                table = _rotate(table_270);
            }
            else if(compare_size180(num)){
                table_270 = _rotate(table_180);
                table = _rotate(table_270);
            }
            else if(compare_size270(num)){
                table = _rotate(table_270);
            }
            
        }
    }
    return answer;
}
