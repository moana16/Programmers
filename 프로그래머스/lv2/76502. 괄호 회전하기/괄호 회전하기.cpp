#include <bits/stdc++.h>

using namespace std;
int isCorrect(string s) {
    stack<char> st;
    for(auto c : s) {
        if(c == '[' || c == '{' || c =='(') {
            st.push(c);
        }
        else if(c == ']') {
            if(!st.empty() && st.top()=='[') st.pop();
            else return 0;
        }
        else if(c == '}') {
            if(!st.empty() && st.top()=='{') st.pop();
            else return 0;
        }
        else if(c == ')') {
            if(!st.empty() && st.top()=='(') st.pop();
            else return 0;
        }
    }
    if(st.empty()) return 1;
    else return 0;
    
}

int solution(string s) {
    int answer = 0;
    answer += isCorrect(s);
    
    for(int i=0; i<s.length()-1; i++) {
        string a = s.substr(0,1);
        s = s.substr(1);
        s = s+a;
        answer += isCorrect(s);
        //cout<<s<<"\n";
    }
   
    return answer;
}