#include<bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq;
    for(auto w : works) pq.push(w);
    for(int i=0; i<n; i++) {
        int x = pq.top(); pq.pop();
        if(x > 0 ) pq.push(x-1);
        else pq.push(0);
    }
    while(!pq.empty()) {
        answer += pow(pq.top(),2);
        pq.pop();
    }
    return answer;
}