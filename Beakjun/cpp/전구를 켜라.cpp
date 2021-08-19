#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<queue>
const int INF = 2501; // 절대 나올 수 없는 경로값
using namespace std;

int MAX = 502;
int graph[501][501];
int DP[502][502];
int visited[501][501];
int N, M;

int main(int argc, char** argv)
{
    string temp;
    cin >> N >> M;
    memset(DP, 0, sizeof(DP));
    memset(visited, 0, sizeof(visited));
    fill(&DP[0][0], &DP[MAX-1][MAX-1], N+M+1);
    DP[0][0] = 0;

    if((N+M)%2 == 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for(int i = 0 ;i < N; i++){
        cin >> temp;
        for(int j = 0 ; j < M ; j ++){
            if((i+j)%2 == 0){
                if(temp[j]=='/'){
                    graph[i][j] = 1;
                }else{
                    graph[i][j] = 0;
                }
            }else{
                visited[i][j] = 1;
                if(temp[j]=='/'){
                    graph[i][j] = 0;
                }else{
                    graph[i][j] = 1;
                }
            }
        }
    }
    

    priority_queue<pair<int, pair<int,int>>> pq;
    pq.push(make_pair(0,make_pair(0,0)));
    DP[0][0] = 0;
    
    // for(int k = 0 ; k <= N; k++){
    //     for(int p = 0 ; p <= M ; p++){
    //         cout << graph[k][p] << ' ';
    //     }cout << endl;
    // }cout << endl;


    while(pq.empty() ==0){
        int Cost = -pq.top().first;

        int newi = pq.top().second.first;
        int newj = pq.top().second.second;
        // cout << newi << ' ' << newj << ' ' << DP[newi][newj] << endl;
        pq.pop();

        if(newi-1 >= 0 && newj-1 >= 0)
            if (DP[newi-1][newj-1] > DP[newi][newj] + graph[newi-1][newj-1])
            {
                DP[newi-1][newj-1] = DP[newi][newj] + graph[newi-1][newj-1];
                pq.push(make_pair(-DP[newi-1][newj-1], make_pair(newi-1, newj-1)));
            }
        if(newi-1 >= 0 && newj + 1 <= M)
            if (DP[newi-1][newj+1] > DP[newi][newj] + graph[newi-1][newj])
            {
                DP[newi-1][newj+1] = DP[newi][newj] + graph[newi-1][newj];
                pq.push(make_pair(-DP[newi-1][newj+1], make_pair(newi-1, newj+1)));
            }
        if(newj-1 >= 0 && newi + 1 <= N)
            if (DP[newi+1][newj-1] > DP[newi][newj] + graph[newi][newj-1])
            {
                DP[newi+1][newj-1] = DP[newi][newj] + graph[newi][newj-1];
                pq.push(make_pair(-DP[newi+1][newj-1], make_pair(newi+1, newj-1)));
            }
        if(newi + 1 <= N && newj + 1 <= M)
            if (DP[newi+1][newj+1] > DP[newi][newj] + graph[newi][newj])
            {
                DP[newi+1][newj+1] = DP[newi][newj] + graph[newi][newj];
                pq.push(make_pair(-DP[newi+1][newj+1], make_pair(newi+1, newj+1)));
            }
        // for(int k = 0 ; k <= N; k++){
        //     for(int p = 0 ; p <= M ; p++){
        //         cout << DP[k][p] << ' ';
        //     }cout << endl;
        // }
    }
    
    cout << DP[N][M] << endl;

    return 0;
}
