#include <iostream>
#include <string>
using namespace std;

int main(void){
        int N = 0;
        cin >> N;
        for ( int i = 1; i <= 9; i++) {
                cout << N << " * " << i << " = " << N * i << endl;
        }
	return 0;
}
