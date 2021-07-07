#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int Answer;
int N, b;
int temp;
int temp1, temp2;
bool out;
bool is_answer;

int main(int argc, char** argv)
{
	int T, test_case;
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{       
                cin >> N;
                temp = N;
                
                b = 2;
		Answer = 0;
                is_answer = false;
                while(b <= (temp + 1)/2){
                        out = true;
                        N = temp;
                        temp1 = N % b;
                        N = N / b;
                        
                        while(N >= 1){
                                temp2 = N % b;
                                // cout << "temp1 : " << temp1 << "temp2 : " << temp2 << endl;
                                N = N / b;
                                if(temp1 != temp2 ){
                                        b += 1;
                                        out = false;
                                        break;
                                }
                        }
                        // cout << "out: " << out << endl;
                        if(out == 1){
                                is_answer = true;
                                break;
                        }
                }
                if(is_answer == false){
                        Answer = temp - 1;
                }else{Answer = b;}


		

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
