#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    
    for(int i=0; i<priorities.size(); i++) {
        q.push({i,priorities[i]});
    }
    
    sort(priorities.begin(), priorities.end());
    
    int cnt = 1;
    while(!q.empty()) {
        int pos = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if(x == priorities.back()) {
            priorities.pop_back();
            if(pos == location) answer = cnt;
            cnt++;
        } else {
            q.push({pos,x});
        }
        
        
    }
    return answer;
}