#include <iostream>
#include <vector>

using namespace std;

int Answer;
int N, K;
int temp;
int cur;
int iter;
bool check;
int stones[1000000];
// vector<int> stones;

int main(int argc, char** argv)
{
	int T, test_case;
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
                cur = 0;
		cin >> N;
                for(int i = 0; i<N;i++){
                        cin >> stones[i];
                }
                cin >> K;
                
                iter = 0;
                while(cur < stones[N - 1]){
                        cur += K;
                        Answer += 1;
                        check = false;
                        while(stones[iter] <= cur){
                                iter += 1;
                                check = true;
                                if(stones[iter] == 0){
                                        break;
                                }
                        }
                        if(iter >= N +1){
                                break;
                        }
                        if(check == false){
                                Answer = -1;
                                break;
                        }
                        cur = stones[iter - 1];
                }
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}
	return 0;
}
