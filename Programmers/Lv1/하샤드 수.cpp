#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int N = 0;
    string X_str = to_string(x);
    int num_len = X_str.size();
    for (int i = 0; i < num_len ; i++){
        N += (int)X_str[i] - 48;
    }
    
    if(x % N != 0) answer = false;
    return answer;
}
