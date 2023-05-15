#include <bits/stdc++.h>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st;
    for(auto c : s) {
        if(st.empty() || st.top() != c) {
            st.push(c);
        }else if(st.top() == c){
            st.pop();
        }
    }
    if(st.empty()) answer = 1;
    else answer = 0;
    
    return answer;
}