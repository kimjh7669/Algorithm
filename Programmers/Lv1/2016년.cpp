#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
    string day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int num = 0;
    for(int i = 0; i<a ;i++){
        num += month[i];
    }
    num += b;
    num = num + 4;
    int temp;
    temp = num % 7;
    answer = day[temp];
    return answer;

}
