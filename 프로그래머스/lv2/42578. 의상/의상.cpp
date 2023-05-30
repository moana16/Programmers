#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string,vector<string>> types;
    
    for(auto& cloth : clothes) {
        string cate = cloth[1];
        types[cate].push_back(cloth[0]);
        
    }
    int answer = 1;
    for(auto pair : types) {
        answer *= (pair.second.size()+1);
    }
    return answer-1;
}