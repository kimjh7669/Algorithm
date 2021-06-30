#include <iostream>
#include <string>
using namespace std;

int main(void){
        int N = 0;

	string problem;
        cin >> problem;
        
        int length = problem.length();

        for(int i = 0; i <= int(length / 10) ; i++){
                cout << problem.substr(i * 10, 10) << endl;
        }
	return 0;
}
