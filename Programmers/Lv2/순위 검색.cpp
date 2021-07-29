#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#define TRIM_SPACE " \t\n\v"
using namespace std;

vector<string> split(string str, string delimiter);

namespace ospace { 
    inline string trim(string& s,const string& drop = TRIM_SPACE) {
    string r=s.erase(s.find_last_not_of(drop)+1); 
    return r.erase(0,r.find_first_not_of(drop)); 
    }
}
using std::string; 
using ospace::trim;

vector <string> information[50001];

vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    int people_num = info.size();
    string lang = "";
    string whatend = "";
    string elder = "";
    string score = "";
    string food = "";
    string temp = "";
    int ans_temp = 0;
    for(int i = 0 ; i < people_num; i++){
        vector<string> for_info = split(info[i], " ");
        information[i] = for_info;
    }
    cout << endl;
    
    for(int i = 0 ; i < query.size(); i++){
        ans_temp = 0;
        temp = query[i];
        vector<string> for_query = split(query[i], "and");
        
        lang = trim(for_query[0]);
        whatend = trim(for_query[1]);
        elder = trim(for_query[2]);
        temp = trim(for_query[3]);
        vector<string> for_query1 = split(temp, " ");
        food = trim(for_query1[0]);
        score = trim(for_query1[1]);
        
        for(int j = 0 ; j < people_num ; j++){
            if(lang != "-")
                if(information[j][0] != lang) continue;
            if(whatend != "-")
                if(information[j][1] != whatend) continue;
            if(elder != "-")
                if(information[j][2] != elder) continue;
            if(food != "-")
                if(information[j][3] != food) continue;
            if(score != "-")
                if(stoi(information[j][4]) < stoi(score)) continue;
            ans_temp++;
        }
        answer.push_back(ans_temp);
    }
    
    return answer;
}


vector<string> split(std::string str, std::string delimiter) {
    vector<string> ret; size_t pos = 0; std::string token; 
    do { pos = str.find(delimiter); 
    
    if (pos == std::string::npos) {
        token = str; 
    } else {
        token = str.substr(0, pos); 
    } 
    if (token[token.size() -1] == '\r') { 
        token = token.substr(0, token.size() -1); 
    } 
    ret.push_back(token); 
    str.erase(0, pos + delimiter.length()); 
    } 
    while (pos != std::string::npos); 
    return ret; 
}
