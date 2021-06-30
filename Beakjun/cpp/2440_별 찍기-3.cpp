#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string answer = "";
        cin >> N;
        for (int i = 1; i <= N; i++) answer += '*';

        for (int i = N; i > 0; i--){     
                cout <<  answer.substr(0, i) << '\n';
        }
        
        return 0;
}
