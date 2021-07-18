#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int cacheSize, vector<string> cities) {

    int answer = 0;
    vector<string> cachelist;
    string temp; 
    if(cacheSize == 0) return cities.size() * 5;
    temp = "";
        for(int j = 0; j<cities[0].size(); j++){
            temp += tolower(cities[0][j]);
        }
    cachelist.push_back(temp);
    answer += 5;
    for(int i = 1; i< cacheSize ; i++){
        temp = "";
        for(int j = 0; j<cities[i].size(); j++){
            temp += tolower(cities[i][j]);
        }
        if(*find(cachelist.begin(), cachelist.end(), temp) == temp){
            cachelist.erase(std::remove(cachelist.begin(), cachelist.end(), temp), cachelist.end());
            cachelist.insert(cachelist.begin(), temp);
            answer += 1;
            cacheSize ++;
            continue;
        }
        cachelist.insert(cachelist.begin(), temp);
        answer += 5;
    }
    
    for(int i = cacheSize; i < cities.size() ; i++){
        temp = "";
        for(int j = 0; j<cities[i].size(); j++){
            temp += tolower(cities[i][j]);
        }
        if(*find(cachelist.begin(), cachelist.end(), temp) == temp){
            cachelist.erase(std::remove(cachelist.begin(), cachelist.end(), temp), cachelist.end());
            cachelist.insert(cachelist.begin(), temp);
            answer += 1;
        }else{
            cachelist.pop_back();
            cachelist.insert(cachelist.begin(), temp);
            answer += 5;
        }
    }

    return answer;
}
