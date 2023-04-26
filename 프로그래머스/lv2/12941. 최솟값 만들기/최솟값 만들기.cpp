#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<>());
    for(int i=0; i<A.size(); i++) {
        int x = A[i]*B[i];
        cout<<x<<" ";
        answer += x;
    }
    return answer;
}