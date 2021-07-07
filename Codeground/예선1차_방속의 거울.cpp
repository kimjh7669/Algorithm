#include <iostream>
#include <cstring>
using namespace std;

int Answer;
int N;
int visited[1001][1001];
int graph[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
                cin >> N;
                memset(visited, 0, sizeof(visited));
                for (int i = 0; i< N; i++){
                        for(int j=0;j<N;j++){
                                scanf("%1d",&graph[i][j]);
                        }
                }

		Answer = 0;
                int x = 0;
                int y = 0;
                int direc = 0;
                while(y<N && x<N && x >= 0 && y >= 0){
                        if(graph[y][x] == 0){
                                y += dy[direc];
                                x += dx[direc];
                        }
                        else if(graph[y][x] ==2){
                                if(visited[y][x] == 0){
                                        visited[y][x] = 1;
                                        Answer += 1;
                                        }
                                if(direc == 0){direc = 3;}
                                else if(direc == 1){direc = 2;}
                                else if(direc == 2){direc = 1;}
                                else if(direc == 3){direc = 0;}
                                y += dy[direc];
                                x += dx[direc];
                        }
                        else if(graph[y][x] ==1){
                                if(visited[y][x] == 0){
                                        visited[y][x] = 1;
                                        Answer += 1;
                                        }
                                if(direc == 0){direc = 1;}
                                else if(direc == 1){direc = 0;}
                                else if(direc == 2){direc = 3;}
                                else if(direc == 3){direc = 2;}
                                y += dy[direc];
                                x += dx[direc];
                        }
                        
                }
                // for (int i = 0; i< N; i++){
                //         for(int j=0;j<N;j++){
                //                 cout<<visited[i][j] << " ";
                //         }
                //         cout << endl;
                // }

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
