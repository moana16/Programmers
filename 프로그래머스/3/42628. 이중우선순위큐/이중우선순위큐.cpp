#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    multiset<int> ms;
    
    for(auto o : operations) {
        if(o[0] == 'I') {
            string tmp = o.substr(2);
            cout<<tmp<<'\n';
            ms.insert(stoi(tmp));
        }
        else {
            if(ms.size() == 0) continue;
            if(o[2] == '1') ms.erase(--ms.end());
            else ms.erase(ms.begin());
        }
    }
    if(ms.empty()) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else {
        answer.push_back(*--ms.end());
        answer.push_back(*ms.begin());
    }
    return answer;
}