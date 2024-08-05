#include <bits/stdc++.h>

using namespace std;

int getRanking(int cor) {
    if(cor == 6) return 1;
    if(cor == 5) return 2;
    if(cor == 4) return 3;
    if(cor == 3) return 4;
    if(cor == 2) return 5;
    return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0;
    int cor = 0;
    for(auto l : lottos) {
        if(l == 0) cnt++;
        else {
            if(find(win_nums.begin(), win_nums.end(), l) != win_nums.end()) cor++;
        }
    }
    
    
    answer.push_back(getRanking(cor + cnt));
    answer.push_back(getRanking(cor));

    return answer;
}