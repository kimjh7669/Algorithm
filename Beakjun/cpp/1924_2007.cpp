#include <iostream>
#include <string>
using namespace std;

int main(void){
        int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        string day[7] = {"SUN", "MON","TUE","WED","THU","FRI","SAT"};
        int key;
        int x, y;
        cin >> x >> y;
        key = 0;
        for (int i = 0; i< x - 1; i ++ ){
                y += month[i];
        }
        key = y % 7;
        cout << day[key] << '\n';
        return 0;
}
