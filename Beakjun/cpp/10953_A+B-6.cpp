#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;

	while(n--){
		int a, b;
		scanf("%d,%d", &a, &b);
		cout << a+b << "\n";
	}
	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// 	int a, b, t;
//         cin >> t;
//         for (int i = 0; i < t; i ++){
//                 string str = "";
//                 cin >> str;
//                 a = str.at(0) - '0';
//                 b = str.at(2) - '0';
//                 cout << a + b << endl;
//         }
//         return 0;
// }
