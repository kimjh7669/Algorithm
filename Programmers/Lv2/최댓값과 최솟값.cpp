#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;


string solution(string s) {
    string answer = "";
    string line = "Thank you for visiting my Blog.";
    
    vector<int> internal;
    stringstream ss(s);
    string temp;
    while (getline(ss, temp, ' ')) {
        int tmp = stoi(temp);
        internal.push_back(tmp);
    }
    sort(internal.begin(), internal.end());
    answer = to_string(internal.front()) + ' ' + to_string(internal.back());


    return answer;
}
