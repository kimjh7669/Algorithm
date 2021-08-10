#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;

ll maxdp[10];
ll mindp[10];
ll maxtemp[4];
ll mintemp[4];
ll num[10];
char oper[10];

ll cal(ll num1, ll num2, char oper){
    if(oper == '*') return num1*num2;
    else if(oper == '-') return num1-num2;
    else if(oper == '+') return num1+num2;
}

int main()
{
    int N;
    string s;

    cin >> N;
    cin >> s; 

    for(int i = 0 ; i<s.size()/2+1; i++){
        num[i] = s[i*2] - '0';
        if(i == 0){
            maxdp[i] = num[i];
            mindp[i] = num[i];
            continue;
        }
        if(i == 1){
            oper[i] = s[i*2 - 1];
            maxdp[i] = cal(maxdp[i-1], num[i], oper[i]);
            mindp[i] = cal(mindp[i-1], num[i], oper[i]);
            continue;
        }
        oper[i] = s[i*2 - 1];

        maxtemp[0] = cal(maxdp[i-1], num[i], oper[i]);
        maxtemp[1] = cal(maxdp[i-2],cal(num[i-1], num[i], oper[i]), oper[i-1]);
        maxtemp[2] = cal(mindp[i-1], num[i], oper[i]);
        maxtemp[3] = cal(mindp[i-2],cal(num[i-1], num[i], oper[i]), oper[i-1]);
        
        maxdp[i] = *max_element(maxtemp, maxtemp + 4);
        mindp[i] = *min_element(maxtemp, maxtemp + 4);
    }
    cout << maxdp[N/2] << endl;
    
    return 0;
}
