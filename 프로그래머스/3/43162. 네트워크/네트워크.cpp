#include<bits/stdc++.h>

using namespace std;


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    int visited[n];
    queue<int> q;
    memset(visited, false, sizeof(visited));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(computers[i][j] == 1 && !visited[j]) {
                q.push(j);
                visited[j] = true;
                
                while(!q.empty()) {
                    int x = q.front(); q.pop();
                    for(int t=0; t<n; t++) {
                        if(x != t && computers[x][t] == 1 && !visited[t]) {
                            q.push(t);
                            visited[t] = true;
                        }
                    }
                }
                answer++;
            }
            
        }
    }
    return answer;
}