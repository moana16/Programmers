#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int,vector<int>,greater<int>> owner;
    for(int i=0; i<score.size(); i++) {
        if(owner.size() == k ) {
            if(owner.top() < score[i]) {
                owner.pop();
                owner.push(score[i]);
            }
        } 
        else {
            owner.push(score[i]);
        }
        answer.push_back(owner.top());
    }
    return answer;
}