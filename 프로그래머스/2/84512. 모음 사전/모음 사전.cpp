#include<bits/stdc++.h>
using namespace std;

char alpha[5] = {'A','E','I','O','U'};
vector<string> words;

void sol(string cur) {
    if(cur.length() == 5) return;
    for(int i=0; i<5; i++) {
        words.push_back(cur+alpha[i]);
        sol(cur+alpha[i]);
    }
}

int solution(string word) {
    int answer = 0;
    sol("");
    sort(words.begin(), words.end());
    auto it = find(words.begin(), words.end(), word);
    
    answer = it - words.begin() + 1;
    
    return answer;
}