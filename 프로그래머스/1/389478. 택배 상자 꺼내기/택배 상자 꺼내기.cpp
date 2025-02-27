#include <bits/stdc++.h>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    vector<vector<int>> v(w);

    int cnt = 1;
    while(true) {
        if(cnt > n) break;
        if((cnt / w) % 2 == 1) { // 정방향
            for(int i=0; i<w; i++) {
                v[i].push_back(cnt);
                cnt++;
                if(cnt > n) break;
            } 
        }
        else { // 역방향
            for(int i=w-1; i>=0; i--) {
                v[i].push_back(cnt);
                cnt++;
                if(cnt > n) break;
            }
            
        }
    }
    
    for(int i=0; i<w; i++) {
        auto it = find(v[i].begin(), v[i].end(),num);
        if(it != v[i].end()) {
            answer = v[i].size() - (it - v[i].begin());
        }
    }
    
    
    return answer;
    
}