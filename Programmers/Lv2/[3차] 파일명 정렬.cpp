#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool cmp(pair<string, pair<string, int>> a, pair<string, pair<string, int>> b){
    if(a.first == b.first){
        if(stoi(a.second.first) == stoi(b.second.first))
            return a.second.second < b.second.second;
        return stoi(a.second.first) < stoi(b.second.first);
    }
    else
        return a.first < b.first;
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector <pair<string, pair <string, int>>> v;
    string HEAD = "";
    string NUMBER = "";
    pair<string, int> p;
    bool hc = false;
    bool nc = false;
    for(int i=0;i<files.size();i++){
        for(int j=0;j<files[i].size();j++){
            if(hc == false){
                if(files[i][j] <= '9' && files[i][j] >= '0'){
                    NUMBER = NUMBER + files[i][j];
                    hc = true;
                }else{
                    HEAD += tolower(files[i][j]);
                }
            }else{
                if(files[i][j] <= '9' && files[i][j] >= '0'){
                    NUMBER = NUMBER + files[i][j];
            }else{
                    break;
                }
            }
        }
        p = make_pair(NUMBER, i);
        v.push_back(make_pair(HEAD, p));
        hc = nc = false;
        HEAD = NUMBER = "";
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(auto it:v) {
        answer.push_back(files[it.second.second]);
    }
    
    
    return answer;
}

//////////////tuple 사용해보며 틀린 코드.
// #include <string>
// #include <vector>
// #include <map>
// #include <iostream>
// #include <algorithm>
// #include <tuple>

// #define ssi tuple<string,string,int>
// #define pp pair<string,string>
// #define pi pair<string,int>
// using namespace std;

// bool cmp(const pair<string,string>& a, const pair<string,string>& b) {
// 	if (a.second == b.second) return a.first < b.first;
// 	return a.second < b.second;
// }
// bool cmp_int(const pair<string,int>& a, const pair<string,int>& b) {
// 	if (a.second == b.second) return a.first < b.first;
// 	return a.second < b.second;
// }

// bool cmp_first(const tuple<string,string,int>& a, const tuple<string,string,int>& b) {
// 	// if (a.second == b.second) return a.first < b.first;
// 	return a.second < b.second;
// }
// bool cmp_second(const tuple<string,string,int>& a, const tuple<string,string,int>& b) {
// 	// if (a.third == b.third) return a.first < b.first;
// 	return a.third < b.third;
// }

// vector<string> solution(vector<string> files) {
//     vector<string> answer;
//     vector<tuple<string,stirng,int>> temp_vector;
//     string temp;
//     string HEAD;
//     string NUMBER;
//     map<string, int> files_map;
    
//     bool is_int = false;
//     map<string, int> int_idx;
//     bool is_not_int = false;
//     map<string, int> not_int_idx;
    
//     for(int i=0;i<files.size();i++){
//         temp = files[i];
//         for_each(temp.begin(), temp.end(), [](char & c) {c = ::tolower(c);});
//         HEAD = "";
//         NUMBER = "";
//         for(int j=0;j<temp.size();j++){
//             if(temp[j]>=48 && temp[j]<=57 && is_int == false){
//                 is_int = true;
//                 int_idx[files[i]] = j;
//             }else if(is_int == true && (temp[j] < 48 || temp[j]>57)){
//                 is_not_int = true;
//                 not_int_idx[files[i]] = j;
//                 break;
//             }
//         }
//         for(int j=0;j<int_idx[files[i]];j++)
//             HEAD = HEAD + temp[j];        
//         for(int j=int_idx[files[i]];j<not_int_idx[files[i]];j++)
//             NUMBER = NUMBER+ temp[j];        
        
//         int idx = stoi(NUMBER);
//         temp_vector.push_back(make_tuple(files[i],HEAD,idx));
//         files_map[files[i]] = idx;
//         is_not_int = false;
//         is_int = false;
//     }
//     cout << "================files_map=====================" <<endl;
//     for(auto it:files_map) cout << it.first << ' ' << it.second << endl;
//     vector<pi> vec(files_map.begin(),files_map.end() );
// 	sort(vec.begin(), vec.end(), cmp_int);
//     cout << "===================vec========================" <<endl;
//     for(auto it:vec) cout << it.first << ' ' << it.second << endl;
//     sort(temp_vector.begin(), temp_vector.end(), cmp_first);
//     sort(temp_vector.begin(), temp_vector.end(), cmp_second);
//     for(auto it:temp_vector) answer.push_back(it.first);
//     return answer;
// }

//     // vector<pp> vec(files_map.begin(),files_map.end() );
// 	// sort(vec.begin(), vec.end(), cmp);
