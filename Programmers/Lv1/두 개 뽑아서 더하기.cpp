#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> s;
    for(int i = 0;i<numbers.size() -1 ;i++){
        for(int j = i + 1;j<numbers.size(); j++){
            s.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    return s;
}
