#include<iostream>
#include<vector>
#include<algorithm>
int DP1[100001];
int DP2[100001];
using namespace std;

int main(int argc, char** argv)
{
    int N, K;
    cin >> N >> K;
    int max_idx = 0;
    vector<pair<int, int>> weights;
    int temp1, temp2;

    int cur_weight;
    for(int i = 0 ; i < N ; i++){
        cin >> temp1 >> temp2;
        weights.push_back(make_pair(temp1, temp2));
    }
    
    sort(weights.begin(), weights.end());
    max_idx = weights[N-1].first;
    
    for(int i = 0 ; i < weights.size(); i++){
        for(int j = 0 ; j <= K;j++){
            if(j!=0 && DP1[j] !=0){
                if(weights[i].first + j <= K){
                    if(DP1[weights[i].first + j] < DP1[j] + weights[i].second){
                        DP2[weights[i].first + j] = DP1[j] + weights[i].second;
                    }
                }
            }else if(j == 0){
                if(DP1[weights[i].first] < weights[i].second){
                    DP2[weights[i].first] = weights[i].second;
                }
            }
        }
        
        for(int j = 0 ; j <= K ; j++){
            DP1[j] = DP2[j];
        }
    }
    cout << *max_element(DP1, DP1 + K + 1) << endl;
    return 0;
}
