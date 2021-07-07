#include<iostream>
#include<string>
#include<cstring>
#include <vector>
#include <algorithm>
using namespace std;

int C, N;
int answer;
int arr[501];
int Cache[501];

int LIS(int start){
        int& ret = Cache[start];
        if(ret != -1) return ret;
        ret = 1;

        for(int next = start + 1; next < N; next ++){
                if(arr[start] < arr[next]){
                        ret = max(ret, LIS(next) + 1);
                }

                 
        }
        return ret;
}

int main(int argc, char** argv)
{
        cin >> C;
        while(C--){
                memset(Cache, -1, sizeof(Cache));
                memset(arr, -1, sizeof(arr));

                cin >> N;
                for(int i = 0; i < N; i++){
                        cin >> arr[i];
                }
                for(int i = 0; i< N; i++){
                        LIS(i);
                }
                answer = 0;
                for(int i = 0; i< N; i++){
                        answer = max(answer, Cache[i]);
                }
                cout << answer << endl;
        }
        return 0;
}
