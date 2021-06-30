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
        for (int i = 1; i <= N;i ++){
            temp = "";
            for (int j = 0 ; j < (N-i) ; j ++) temp += " ";
            cout << answer.substr(0,i) << temp << temp << answer.substr(0,i) <<'\n';
        }
        for (int i = N - 1 ; i > 0 ; i -- ){
            temp = "";
            for (int j = 0 ; j < (N-i) ; j ++) temp += " ";
            cout << answer.substr(0,i) << temp << temp << answer.substr(0,i) <<'\n';
        }
        
        return 0;
}
