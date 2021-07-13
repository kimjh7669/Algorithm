#include <string>
#include <vector>
using namespace std;
string to_2(int N){
    string A = "";
    string temp;
    while(N >0){
        temp = (char)(N%2 + 48);
        N /= 2;
        A = temp+A;
    }
    return A;
}

int count1(string A){
    int ret = 0;
    for(int i = 0; i<A.size(); i++){
        if(A[i] == '1') ret ++;
    }
    return ret;
}

int solution(int n) {
    int answer = 0;
    int num_1 = count1(to_2(n));
    for(int i = n+1;;i++){
        if(num_1 == count1(to_2(i))){
            answer = i;
            break;
        }
    }
    
    return answer;
}


// 시간 초과 내가 푼 것.

// #include <string>
// #include <vector>
// #include <iostream>
// #include <cmath>
// using namespace std;
// string to_2(int N){
//     string A = "";
//     string temp;
//     while(N >0){
//         temp = (char)(N%2 + 48);
//         N /= 2;
//         A = temp+A;
//     }
//     return A;
// }

// int to_10(string A){
//     int to10 = 0;
//     cout << endl << "overBase2: " << A << endl;
//     for(int i = A.size()-1;i>=0;i--){
//         to10 += (A[i] - 48) * pow(2, A.size()-i-1);
        
//         // cout << "i : " << i <<  " to10 : " << to10 << endl;
//     }
//     return to10;
// }

// int solution(int n) {
//     int answer = 0;
//     string overBase2 = "";
//     int changepos0 = -1;
//     int changepos1 = -1;
//     int num_0 = 0;
//     int num_1 = 0;
    
//     string Base2;
//     Base2 = to_2(n);
    
//     for(int i=Base2.size() - 1;i>=0;i--){
//         if(Base2[i] == '1'){
//             num_1 ++;
//             if(changepos1 == -1)
//                 changepos1 = i;
//         }else if(Base2[i] == '0'){
//             num_0++;
//             if(changepos1 != -1 && changepos0 == -1){
//                 changepos0 = i;
//                 for(int j = 0; j<num_1-1;j++){
//                     overBase2 = '1' + overBase2;
//                 }
//                 for(int j = 0; j<num_0;j++){
//                     overBase2 = '0' + overBase2;
//                 }
//                 overBase2 = '1' + overBase2;
//                 for(int j = i-1; j >=0;j--){ 
//                     overBase2 = Base2[j] + overBase2; 
//                 }
//                 break;
//             }
//         }
//     }
//     if(changepos0 == -1){
//         for(int i = 0; i<num_1 - 1;i++){
//             overBase2 = '1' + overBase2;
//         }
//         for(int i = 0; i<num_0;i++){
//             overBase2 = '0' + overBase2;
//         }
//         overBase2 = '0' + overBase2;
//         overBase2 = '1' + overBase2;
//     }
    
//     cout << overBase2;
//     answer = to_10(overBase2);
    
//     return answer;
// }

