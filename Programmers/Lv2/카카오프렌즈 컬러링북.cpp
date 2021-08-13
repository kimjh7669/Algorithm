// #include <vector>
// #include <queue>
// #include <iostream>
// using namespace std;

// // 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.


// int visited[101][101];
// int dx[4] = {-1, 1, 0, 0};
// int dy[4] = {0, 0, -1, 1};
// int bfs(int x, int y, vector<vector<int>> picture, int m, int n){
//     int size = 0;
//     int color = picture[x][y];
//     queue <pair<int, int>> Que;
//     visited[x][y] = 1;
//     size++;
//     Que.push(make_pair(x, y));
//     int cur_x;
//     int cur_y;
//     while(Que.empty() != 1){
//         cur_x = Que.front().first;
//         cur_y = Que.front().second;
//         Que.pop();
            
//         for(int i = 0 ; i < 4; i++){
//             int new_x = cur_x + dx[i];
//             int new_y = cur_y + dy[i];
//             if(new_x >= 0 && new_y >= 0 && new_x < m && new_y < n){
//                 if(visited[new_x][new_y] == 0 && picture[new_x][new_y] == color){
//                     visited[new_x][new_y] = 1;
//                     Que.push(make_pair(new_x, new_y));
//                     size ++ ;
//                 }                   
//             }
//         }
//     }
    
    
//     return size;
// }
// vector<int> solution(int m, int n, vector<vector<int>> picture) {    
//     vector<int> answer(2);
//     answer[0] = 0;
//     answer[1] = 0;
//     int cur_size = 0;
//     int max_size = 0;
//     for(int i = 0 ; i < m; i++){
//         for(int j = 0 ; j< n ; j++){
//             cur_size = 0;
//             if(picture[i][j] != 0 && visited[i][j] == 0){
//                 cur_size = bfs(i, j, picture, m, n);
//                 if(cur_size != 0) answer[0] ++;
//             } 
//             if(cur_size >= answer[1]) answer[1] = cur_size;
//         }
//     }
//     return answer;
// }



#include <vector>
#include <queue>
#include<iostream>
using namespace std;
 
int Max_Size;
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
bool Visit[100][100];
 
int BFS(int a, int b, int m, int n, vector<vector<int>> MAP)
{
    int Color = MAP[a][b];
    int Size = 1;
    queue<pair<int,int>> Q;
    Q.push(make_pair(a,b));
    Visit[a][b] = true;
    
    while(Q.empty() == 0)
    {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        
        for(int i = 0 ; i < 4; i++)
        {
            int nx = x +dx[i];
            int ny = y+ dy[i];
            if(nx>=0 && ny>=0 && nx < m && ny < n)
            {
                if(MAP[nx][ny] == Color && Visit[nx][ny] == false)
                {
                    Visit[nx][ny] = true;
                    Q.push(make_pair(nx,ny));
                    Size++;
                }
            }
        }
    }
    return Size;
}
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) 
{
    for(int i = 0 ; i <m;i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            Visit[i][j] = false;
        }
    }
    int number_of_area = 0;
    int max_size_of_one_area = 0;  
    for(int i = 0; i < m; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(picture[i][j] != 0 && Visit[i][j] == false)
            {
                int Size = BFS(i, j, m, n, picture);
                if(Size > max_size_of_one_area) max_size_of_one_area = Size;
                number_of_area++;
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
