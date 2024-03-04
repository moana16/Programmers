#include<bits/stdc++.h>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    set<string> s;
    for(int i=0; i<my_string.size(); i++) {
        s.insert(my_string.substr(i));
    }
    for(auto c : s) answer.push_back(c);
    return answer;
}