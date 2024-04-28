#include<bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int n = dungeons.size();
    
    vector<int> v(n);
    for(int i=0; i<n; i++) v[i] = i;
    
    do {
        int tmp = k, cnt = 0;
        for(int i=0; i<n; i++) {
            if(tmp >= dungeons[v[i]][0]) {
                tmp -= dungeons[v[i]][1];
                cnt++;
            }else break;
        }
        answer = max(answer, cnt);
        
    }
    while(next_permutation(v.begin(), v.end()));
    return answer;
}