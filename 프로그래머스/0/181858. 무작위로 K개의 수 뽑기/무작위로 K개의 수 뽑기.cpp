#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(auto c : arr) {
        if(answer.empty() || find(answer.begin(), answer.end(), c) == answer.end()) answer.push_back(c);
        if(answer.size() == k) break;
    }
    if(answer.size() < k) {
        while(answer.size() < k) answer.push_back(-1);
    }
    return answer;
}