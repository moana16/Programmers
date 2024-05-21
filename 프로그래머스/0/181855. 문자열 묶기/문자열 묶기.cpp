#include<bits/stdc++.h>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int len[100001];
    memset(len, 0, sizeof(len));
    for(auto s : strArr) {
        len[s.length()]++;
    }
    for(int i=1; i<=100000; i++) answer = max(answer, len[i]);
    return answer;
}