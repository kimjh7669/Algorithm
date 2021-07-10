#include <string>
#include <vector>

using namespace std;

int gcd(int n,int m){
    int num;
    if(n % m == 0){
        return m;
    }
    num = n % m;
    return gcd(m, num);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd_num;
    if(n < m){
        int tmp = n;
        n = m;
        m = tmp;
    }
    gcd_num = gcd(n,m);
    answer.push_back(gcd_num);
    answer.push_back(n * (m/gcd_num));
    return answer;
}
