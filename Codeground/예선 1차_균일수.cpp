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
                                N = N / b;
                                if(temp1 != temp2 ){
                                        b += 1;
                                        out = false;
                                        break;
                                }
                        }
                        if(out == 1){
                                is_answer = true;
                                break;
                        }
                }
                if(N == 1 || N==2){
                        Answer = 2;
                }
                else if(is_answer == false){
                        Answer = temp - 1;
                }else{Answer = b;}


		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}






// #include <iostream>
// #include <vector>
// #include <string>
// #include <cstring>
// #include <math.h> 
// using namespace std;

// int Answer;
// int N;
// int temp;
// int base, coef, exponent;
// int combination_arr[30][30];
// int bound;
// int N_len;


// unsigned Combi( unsigned n, unsigned k )
// {
//         if (k > n) return 0;
//         if (k * 2 > n) k = n-k;
//         if (k == 0) return 1;

//         int result = n;
//         for( int i = 2; i <= k; ++i ) {
//                 result *= (n-i+1);
//                 result /= i;
//         }
//         return result;
// }

// int main(int argc, char** argv)
// {       
//         // 지수가 i라고 생각하고 combination_arr 열을 i로 생각한다.
//         for(int i = 1; i<=21; i++){
//                 for(int j = 0; j<= i; j++){
//                         combination_arr[i][j] = Combi(i, j);
//                 }
//         }

// 	int T, test_case;
// 	cin >> T;
// 	for(test_case = 0; test_case  < T; test_case++)
// 	{       
//                 cin >> N;
//                 N_len = to_string(N).size();

//                 if(N == 1 || N == 2 || N == 3){
//                         cout << "Case #" << test_case+1 << endl;
// 		        cout << Answer << endl;
//                         continue;
//                 }
                
                
//                 // cout << bound;
//                 base = 2;
//                 while(true){
//                         bound =(N_len/log(2)) + 1;

//                         // 지수를 하나씩 더하며 비교한다.
//                         for(exponent = 2; exponent <= bound; exponent ++ ){
//                                 temp = 0;
//                                 for(int j = 2; j < base; j++){
//                                         for(int k = 1; k <= exponent; k++){
//                                                 temp += (combination_arr[exponent][k] - 1) * j;
//                                                 cout << combination_arr[exponent][k];
//                                         }                       
//                                 }
//                                 // cout << temp << endl;
//                                 if(N%temp == 0){
//                                         Answer = base;
//                                         break;
//                                 }
//                         }
//                         // A를 곱해주면서 비교한다. -> 하지말고 N을 나누어서 나머지가 0이면 된다.
//                         base += 1;
//                 }

// 		cout << "Case #" << test_case+1 << endl;
// 		cout << Answer << endl;
// 	}

// 	return 0;//Your program should return 0 on normal termination.
// }
