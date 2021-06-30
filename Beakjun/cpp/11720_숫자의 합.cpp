#include <iostream>
#include <string>
using namespace std;

int main(void){
        int N;
        cin >> N;
        int answer = 0;
        int temp = 0;

	string problem;
        cin >> problem;
        for(int i = 0; i < N ; i ++ ){
                temp = int(problem[i]) - 48;
                answer += temp;
        }
        cout << answer << endl;

	return 0;
}
