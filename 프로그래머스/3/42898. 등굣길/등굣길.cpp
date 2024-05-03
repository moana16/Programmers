#include<bits/stdc++.h>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int dp[n+1][m+1];
    
    memset(dp, 0, sizeof(dp));
    
    for(auto p : puddles) {
        dp[p[1]][p[0]] = -1;
    }
    
   dp[1][1] = 1;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(dp[i][j] == -1) continue;
            if(i==1 && j==1) continue;
            if(i == 1 && dp[i][j-1] != -1) dp[i][j] = dp[i][j-1];
            else if(j == 1 && dp[i-1][j] != -1) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = (dp[i-1][j] == -1 ? 0 : dp[i-1][j]) + (dp[i][j-1] == -1 ? 0 : dp[i][j-1]);
                dp[i][j] %= 1000000007;
            }
            
            
        }
        
    }

    return dp[n][m];
}