#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;


string convertSharp(string notes)
{
    string ret = "";
    const int diff = 'A' - 'a';
    for(int i=0; i<notes.size(); i++)
    {
        if(i < notes.size()-1 && notes.at(i+1) == '#')
        {
            ret.push_back((char)(notes.at(i) - diff));
            i++;
        }
        else
        {
            ret.push_back(notes.at(i));
        }
    }
    return ret;
}



string solution(string m, vector<string> musicinfos) {
    string answer = "(None)";
    
    string buf = "";
    vector <string> buff;
    vector <int> starttime;
    vector <int> endtime;
    string temp;
    int playingtime = 0;
    string playingsheet = "";
    int answer_time;
    bool if_first = true;
        
    for(int i=0;i<musicinfos.size();i++){
        
        istringstream ss(musicinfos[i]);
        buf = "";
        while (getline(ss, buf, ',')) {
            buff.push_back(buf);
        }
        for(auto it:buff) cout << it << ' ';
        cout << endl;
        // calculate playingtime
        istringstream ss1(buff[0]);
        while (getline(ss1, buf, ':')) {
            starttime.push_back(stoi(buf));
        }
        istringstream ss2(buff[1]);
        while (getline(ss2, buf, ':')) {
            endtime.push_back(stoi(buf));
        }
        playingtime = (endtime[0] - starttime[0]) * 60 + (endtime[1] - starttime[1]);
        
        // get the whole sheet in playingtime
        buff[3] = convertSharp(buff[3]);
        if(buff[3].size() >= playingtime){
            for(int j=0;j<playingtime;j++){
                playingsheet = playingsheet + buff[3][j];
            }
        }else{
            int iter_temp = playingtime / buff[3].size();
            for(int j = 0;j<iter_temp;j++){
                playingsheet = playingsheet + buff[3];
            }
            iter_temp = playingtime % buff[3].size();
            for(int j = 0;j<iter_temp;j++){
                playingsheet = playingsheet + buff[3][j];
            }
        }
        
        cout << "playingsheet : " << playingsheet << endl;
        m = convertSharp(m);
        for(int j=0;j<playingsheet.size();j++){
            if(playingsheet[j] == m[0]){
                bool if_correct = true;
                for(int k=0;k<m.size();k++){
                    if(playingsheet[j+k] != m[k]){
                        if_correct = false;
                        break;
                    }
                }
                if(if_correct == true){
                    if(if_first == true){
                        answer_time = playingtime;
                        if_first = false;
                        answer = buff[2];
                    }else{
                        if(playingtime > answer_time){
                            answer = buff[2];
                            answer_time = playingtime;
                        }
                    }
                }
            }
        }
        

        buff.clear();
        starttime.clear();
        endtime.clear();
        playingsheet = "";
        playingtime = 0;
        cout << endl;
    }
    
    

    
    
    return answer;
}
