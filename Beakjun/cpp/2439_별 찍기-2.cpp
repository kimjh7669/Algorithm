#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string temp;
        string answer = "";
        cin >> N;
        for (int i = 1; i <= N; i++){
                temp = "";
                for ( int j = 1 ; j <= (N-i) ; j ++){
                        temp += " ";
                }
                answer += '*';
                cout <<  temp << answer << '\n';
        }
        
        return 0;
}
