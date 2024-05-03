#include<bits/stdc++.h>

using namespace std;

int mn = 0x7f7f7f;

void DFS(string cur, vector<string> used, vector<string>& words, string target, int cnt) {
    
    if(cur == target) {
        mn = min(mn, cnt);
        return;
    }
    for(auto w : words) {
        if(find(used.begin(), used.end(), w) != used.end()) continue;
        int diff = 0;
         for(int i=0; i<w.length(); i++) {
            if(w[i] != cur[i]) diff++;
        }
        if(diff == 1) {
            used.push_back(w);
            DFS(w, used, words, target, cnt+1);
        }
        
    }
}


int solution(string begin, string target, vector<string> words) {
    int answer = 0x3f3f3f3f;
    if(find(words.begin(), words.end(),target) == words.end()) return 0;
    
    for(auto w : words) {
        int diff = 0;
        vector<string> used;
        for(int i=0; i<w.length(); i++) {
            if(w[i] != begin[i]) diff++;
        }
        if(diff == 1)  {
            used.push_back(w);
            DFS(w, used, words, target,1);  
        }    
    }
    return mn;
}