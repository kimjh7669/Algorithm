#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string answer = "";
        string temp;
        cin >> N;
        for (int i = 1; i <= N; i++) {
                temp = "";
                for(int j = 0 ; j < (N - i) ; j ++){
                        temp += " ";
                } 
                cout << temp << answer << "*" << answer << '\n';
                answer += '*';

        }

        
        return 0;
}
