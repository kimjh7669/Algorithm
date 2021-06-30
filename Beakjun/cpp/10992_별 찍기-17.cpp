#include <iostream>
#include <string>
using namespace std;



int main(void){
    int N;
    string answer = "*";
    string temp;
    string temp1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
            answer += "**";
    }
    for (int i = 1; i <= N; i ++ ){
        temp = "";
        for (int j = N - i; j > 0 ; j --){
                temp += " ";
        }
        if(i == 1 || i == N) cout << temp << answer.substr(0,2 * i - 1) << endl;
        else{
            temp1 = "";
            for (int j = 0; j < 2*i-3;j++) temp1 += " ";
            cout << temp << "*" << temp1 << "*" << endl;
        }
    }
    
    return 0;
}
