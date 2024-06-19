#include<bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can(4);
    can[0] = "aya";
    can[1] = "ye";
    can[2] = "woo";
    can[3] = "ma";
    
    for(auto b : babbling) {
        string tmp = "", before="";
        for(int i=0; i<b.size(); i++) {
            tmp += b[i];
            if(find(can.begin(), can.end(), tmp) != can.end() && before != tmp) {
                before = tmp;
                tmp = "";
            }
        }
        if(tmp.empty()) answer++;
    }
    return answer;
}