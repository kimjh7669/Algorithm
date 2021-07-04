#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string answer = "*";
        string temp;
        cin >> N;
        for (int i = 1; i <= N; i++) {
                answer += " *";
        }
        for (int i = 1; i <= N; i ++ ){
                temp = "";
                for (int j = N - i; j > 0 ; j --){
                        temp += " ";
                }
                cout << temp << answer.substr(0,2 * i - 1) << endl;
        }
        
        return 0;
}
