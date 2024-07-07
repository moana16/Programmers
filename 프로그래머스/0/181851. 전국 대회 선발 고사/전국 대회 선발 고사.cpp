#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<>> pq;
    for(int i=0; i<rank.size(); i++) {
        if(attendance[i]) pq.push({rank[i], i});
    }
    
    int cnt = 0;
    while(!pq.empty()) {
        if(cnt == 3) break;
        if(cnt == 0) answer += 10000 * pq.top().second;  
        else if(cnt == 1) answer += 100 * pq.top().second;
        else if(cnt == 2) answer += pq.top().second;
        
        pq.pop();
        cnt++;
    }
    return answer;
}