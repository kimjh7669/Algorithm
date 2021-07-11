#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i = 0; i<new_id.size(); i++){
        // setp 1
        new_id[i] = (char) tolower(new_id[i]);
        // step 2
        if(new_id[i] != '.' && new_id[i] != '_' && new_id[i] != '-' && (new_id[i] < 48 || new_id[i] > 57 )&& 
           (new_id[i] < 97 || new_id[i] > 122)){
            new_id.erase(new_id.begin() + i);
            i = i - 1;
        }
        // step 3
        if(new_id[i] == '.'){
            if(i<new_id.size() - 2){
                if(new_id[i+1] == '.'){
                    new_id.erase(new_id.begin() + i);
                    i = i - 1;
                }
            }
        }        
    }

    // step 4
    for(int i= 0; i<new_id.size();i++){
        if(new_id[i] == '.'){
            new_id.erase(new_id.begin() + i);
            i = i - 1;
        }
        if(new_id[i] != '.'){break;}
    }
    for(int i= new_id.size() - 1; i>=0;i--){
        if(new_id[i] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        if(new_id[i] != '.'){break;}
    }
    // step 5
    if(new_id.size() == 0){
        new_id.push_back('a');
    }
    // step 6
    for(int i = 0; i< 15 ; i++){
        if(i<new_id.size())
            answer.push_back(new_id[i]);
    }
    for(int i= answer.size() - 1; i>=0;i--){
        if(answer[i] == '.'){
            answer.erase(answer.begin() + i);
            continue;
        }
        if(answer[i] != '.'){break;}
    }
    // step 7
    while(answer.size() < 3){
        answer.push_back(answer[answer.size() - 1]);
    }    
    return answer;
}
