#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> cnts;
    int cnt = 0;
    sort(tangerine.begin(),tangerine.end());
    for(int i=0; i<tangerine.size(); i++) {
        cnt++;
        if(tangerine[i] != tangerine[i+1]) {
            cnts.push_back(cnt);
            cnt = 0;
        }
    }
    sort(cnts.begin(), cnts.end(), greater<>());

    for(int i=0; i<cnts.size(); i++) {
        answer++;
        if(cnts[i] >= k) break;
        else {
            k = k- cnts[i];
        }
    }
    
    return answer;
    
}