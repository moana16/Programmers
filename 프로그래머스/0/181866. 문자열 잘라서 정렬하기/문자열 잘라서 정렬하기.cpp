#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str;
    for(auto s : myString) {
        if(s == 'x') {
            if(str.length() != 0) {
                answer.push_back(str);
                str = "";
                
            }
        } 
        else {
            str += s;
        }
    }
    if(str.length() != 0) answer.push_back(str);
    sort(answer.begin(), answer.end());
    
    return answer;
}