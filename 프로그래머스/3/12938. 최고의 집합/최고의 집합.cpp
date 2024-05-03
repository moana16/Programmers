#include<bits/stdc++.h>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    if(n > s) answer.resize(1,-1);
    else {
        answer.resize(n,s/n);
        int rem = s%n;
        for(int i=0; i<rem; i++) answer[i]++;
        sort(answer.begin(), answer.end());
    }
    return answer;
}