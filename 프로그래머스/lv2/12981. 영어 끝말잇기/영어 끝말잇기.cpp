#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    
    unordered_set<string> wordSet; //정렬이 되지 않고 중복되지 않는 자료구조
    char lastChar = words[0][0];
    
    for(int i=0; i<words.size(); i++) {
        if(lastChar != words[i][0] || wordSet.find(words[i]) != wordSet.end() ) {
            answer[0] = (i % n) + 1;
            answer[1] = (i / n) + 1;
            break;
        }
        wordSet.insert(words[i]);
        lastChar = words[i].back();
            
    }

    return answer;
}