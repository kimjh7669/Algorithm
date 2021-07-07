#include<iostream>
#include<string>
#include<cstring>
#include <vector>
#include <algorithm>
using namespace std;

int C, N;
int w, s;
string Wild;
string temp;
string W, S;
int Cache[101][101];
int IF;
vector< string > str;
vector< string > Real_answer;
vector< string > answer;



int Memorize(int w,int s){
        int &ret = Cache[w][s];
        if(ret != -1) return ret;
        if(s<S.size() && w<W.size() && (W[w]=='?' || W[w] == S[s])){
                return ret = Memorize(w+1, s+1);
        }

        if(w == W.size()) return ret = (s == S.size());
        if(W[w] == '*'){
                if(Memorize(w+1,s) || (s < S.size() && Memorize(w, s+1)))
                        return ret = 1;
        }
        return ret = 0;
}


int main(int argc, char** argv)
{
        cin >> C;

        for(int i=0; i<C; i++){
                cin >> Wild;
                cin >> N;
                for(int j=0; j<N; j++){
                        cin >> temp;
                        str.push_back(temp);
                }
                for(int j = 0; j< N; j++){
                        memset(Cache, -1, sizeof(Cache));
                        W = Wild;
                        S = str[j];
                        memset(Cache, -1, sizeof(Cache[0][0]) * 51 * 51); 
                        if(Memorize(0,0))
                                answer.push_back(S);
                }
                
                str.clear();
                sort(answer.begin(), answer.end());
                for(int k = 0; k<answer.size();k++){
                        Real_answer.push_back(answer[k]);
                }
                answer.clear();
        }
        
        for(int i = 0; i<Real_answer.size();i++){
                cout << Real_answer[i] << endl;
        }
        return 0;

}
