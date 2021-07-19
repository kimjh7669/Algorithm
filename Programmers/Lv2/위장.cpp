#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map <string, int> ans;
    map <string, int>::iterator iter;
    for(int i = 0 ; i < clothes.size(); i++){
        iter = ans.find(clothes[i][1]);
        if(iter == ans.end()){
            ans[clothes[i][1]] = 1;
        }else ans[clothes[i][1]]++;
    }
    for(auto it : ans) answer *= (it.second + 1);
    answer -= 1;
    return answer;
}
