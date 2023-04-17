#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(isdigit(s[0])==0) {
        s.substr(1);
        answer = stoi(s);
    }
    else answer = stoi(s);
    return answer;
}