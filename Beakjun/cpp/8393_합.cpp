#include <iostream>
#include <string>
using namespace std;

int main(void){
        int N;
        cin >> N;
        int answer = 0;
        for (int i = 1; i <= N ; i++) answer += i;
        cout << answer << endl;
        return 0;
}
