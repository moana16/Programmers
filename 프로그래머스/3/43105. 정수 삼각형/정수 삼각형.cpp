#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> triangle) {
    
    int dp[505][505];
    int N = triangle.size();
    dp[1][1] = triangle[0][0];
    for(int i=2; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i-1][j-1];
            
        }
    }
    return *max_element(dp[N]+1, dp[N]+N+1);
    
}