#include <iostream>
#include <string>
using namespace std;



int main(void){
        int N;
        string answer = "";
        cin >> N;
        for (int i = 0; i < N; i++){
                answer += '*';
                cout << answer << '\n';
        }
        
        return 0;
}
