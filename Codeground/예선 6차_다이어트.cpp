/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Answer;
int N, K;
int temp;
vector <int> A;
vector <int> B;
vector <int> tmp; 

int main(void)
{
	int T, test_case;
	
	setbuf(stdout, NULL);

	scanf("%d", &T);
	for(test_case = 0; test_case < T; test_case++)
	{
		cin >> N >> K;
                for(int i = 0; i< N; i++){
                        scanf("%d", &temp);
                        A.push_back(temp);

                }
                for(int i = 0; i< N; i++){
                        scanf("%d", &temp);
                        B.push_back(temp);
                }
		
                sort(A.begin(), A.end());
                sort(B.begin(), B.end());
                // sort(B.begin(), B.end(), greater<int>());
                for(int i = 0; i<K; i++){
                        temp = A[i] + B[K-i -1];
                        tmp.push_back(temp);
                }
                Answer = 0;
                for(int i = 0; i<tmp.size(); i++){
                        Answer = max(Answer, tmp[i]);
                }
                
                A.clear();
                B.clear();
                tmp.clear();
		printf("Case #%d\n", test_case+1);
                printf("%d\n", Answer);
        
	}

	return 0;//Your program should return 0 on normal termination.
}
