#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string answer = "";
        string temp;
        cin >> N;
        for (int i = 1; i <= N; i++) {
                answer += '*';
        }
        for (int i = N; i > 0;i --){
            temp = "";
            for (int j = 0 ; j < (N-i) ; j ++) temp += " ";
            cout <<  temp << answer.substr(0,i- 1) << "*"<< answer.substr(0,i-1) <<'\n';
        }
        for (int i = 2 ; i <= N ; i++ ){
            temp = "";
            for (int j = 0 ; j < (N-i) ; j ++) temp += " ";
            cout <<  temp << answer.substr(0,i- 1) << "*"<< answer.substr(0,i-1)  <<'\n';
        }
        
        return 0;
}
