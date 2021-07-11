#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int L_pos = 10;
    int R_pos = 12;
    int diff_L, diff_R, temp;
    for(int i = 0; i< numbers.size(); i++){
        if(numbers[i] == char(1) || numbers[i] == char(4) || numbers[i] == char(7)){
            answer = answer + 'L';
            L_pos = numbers[i];
        }else if(numbers[i] == char(3) || numbers[i] == char(6) || numbers[i] == char(9)){
            answer = answer + 'R';
            R_pos = numbers[i];
        }else{
            if(numbers[i] == char(0)){
                temp = 11;   
            }else{
                temp = numbers[i];
            }
            
            if(L_pos == 1 || L_pos == 4 || L_pos == 7 || L_pos == 10){
                if(temp > L_pos){
                    diff_L = (2 + temp - L_pos)/3;    
                }else{
                    diff_L = (4 + L_pos - temp)/3;
                }
            }else{
                if(temp > L_pos){
                    diff_L = (temp - L_pos)/3;    
                }else{
                    diff_L = (L_pos - temp)/3;
                }
            }
            if(R_pos == 3 || R_pos == 6 || R_pos == 9 || R_pos == 12){
                if(R_pos > temp){
                    diff_R = (2 + R_pos - temp)/3;
                }else{
                    diff_R = (4 + temp - R_pos)/3;
                }
            }else{
                if(R_pos > temp){
                    diff_R = (R_pos - temp)/3;
                }else{
                    diff_R = (temp - R_pos)/3;
                }
            }
            if(diff_L < diff_R){
                L_pos = temp;
                answer = answer + 'L';
            }else if(diff_L > diff_R){
                R_pos = temp;
                answer = answer + 'R';
            }else{
                if(hand == "right"){
                    R_pos = temp;
                    answer = answer + 'R';
                }else{
                    L_pos = temp;
                    answer = answer + 'L';
                }
            }
            
        }
    }
    
    return answer;
}
