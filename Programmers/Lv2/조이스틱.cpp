#include <string>
#include <vector>
#include <iostream>

int cursor;

using namespace std;

int solution(string name) {
    int answer = 0;
    int temp = 0;
    int sumation = 0;
    int A_length = 0;
    int A_idx = 0;
    
    
    for(int i = 0; i < name.size(); i++){
        temp = (int)(name[i]) - 65;
        if(temp > 13) temp = 26 - temp;
        sumation += temp;
    }
    temp = name.size() - 1;
    for(int i = 0 ; i < name.size(); i++){
        if(name[i] == 'A'){
            A_idx = i - 1;
            A_length = 1;
            for(int j = i ; j < name.size(); j++){
                if(name[j] != 'A'){
                    
                    break;
                }
                A_length ++;
            }
            int tmp = A_idx * 2 + (name.size() - A_idx - A_length);
            if(tmp < temp ) temp = tmp;
            
        }
    }
    sumation += temp;
    answer = sumation;
    
    return answer;
}
