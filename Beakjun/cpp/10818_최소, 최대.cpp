#include <iostream>
#include <string>
using namespace std;

int A[1000001];
int MIN = -1000001;
int MAX = 1000001;
int N;

int main(void){
        cin >> N;
        for (int i = 0; i < N; i++){
                cin >> A[i];
                if(MIN < A[i]) MIN = A[i];
                if(MAX > A[i]) MAX = A[i];
        }
        cout << MAX << ' ' << MIN << endl;
        return 0;
}
