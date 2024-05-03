#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<>> pq;
    
    sort(A.begin(), A.end());
    for(auto c : B) pq.push(c);
    
    int cnt = 0;
    
    while(!pq.empty()) {
        int t = pq.top(); pq.pop();
        if(t > A[cnt]) cnt++;
        
    }
    
    return cnt;
}