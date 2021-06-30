#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;

	for (int i = 1; i <= n; i ++ )
        {
		int a, b;
		scanf("%d %d", &a, &b);
		cout << "Case #" << i << ": " << a << " + "<< b << " = " << a+b << "\n";
	}
	return 0;
}
