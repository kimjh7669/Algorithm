#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstring>

using namespace std;

int n, board[100][100], cashe[100][100];

int jump(int y, int x)
{
        if(y >= n || x >= n) return 0;
        if(y == n-1 && x == n-1) return 1;
        
        int size = board[y][x];
        int& ret = cashe[y][x];
        if(ret != -1)
                return ret;
        ret = (jump(y + size,x) || jump(y, x + size));
        return ret;
}


int main(void)
{       
        int C;
        int result[50];
        cin >> C;
        for (int i = 0; i < C; i ++){
                cin >> n;
                for(int by = 0; by < n; by++)
                        for ( int bx = 0; bx < n ; bx++)
                                cin >> board[by][bx];
                memset(cashe, -1, sizeof(cashe));
                result[i] = jump(0,0);                
        }
        for(int i = 0; i< C; i++){
                if(result[i] == 1)
                        cout<<"YES"<< endl;
                else
                        cout<<"NO"<<endl;
        }
        return 0;
}
