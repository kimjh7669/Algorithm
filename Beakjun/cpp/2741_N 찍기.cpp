#include <iostream>
#include <string>
using namespace std;

int main(void){
        int N = 0;
        cin >> N;
        for ( int i = 1; i <= N; i++) {
                cout<< i << '\n';
        }
	return 0;
}

/*
endl의 경우 항상 버퍼를 비우기에 '\n'에 비해 시간이 오래 걸림
*/
