#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {

    int answer = 0;
    for(int i=0;i<skill_trees.size();i++){
        int k = 1;
        bool if_possible = true;
        for(int j=0;j<skill_trees[i].size();j++){
            for(int p = k; p < skill.size();p++){
                if(skill[p] == skill_trees[i][j]){
                    if_possible = false;
                    break;
                }
            }
            if(skill_trees[i][j] == skill[k - 1]) k++;
            if(if_possible == false) break;
        }
        if(if_possible == true) answer++;
        cout << endl;
    }
    return answer;
}
