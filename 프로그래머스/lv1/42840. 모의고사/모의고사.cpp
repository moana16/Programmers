#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,1,2,3,2,4,2,5};
    vector<int> v3 = {3,3,1,1,2,2,4,4,5,5};
    
    int total_v1 = 0;
    int total_v2 = 0;
    int total_v3 = 0;
    
    for(int i=0; i<answers.size(); i++) {
        if(v1[i%v1.size()] == answers[i]) total_v1++;
        if(v2[i%v2.size()] == answers[i]) total_v2++;
        if(v3[i%v3.size()] == answers[i]) total_v3++;
    }
    cout<<total_v2;
    int maxNum = max({total_v1, total_v2, total_v3});
    if(maxNum == total_v1) answer.push_back(1);
    if(maxNum == total_v2) answer.push_back(2);
    if(maxNum == total_v3) answer.push_back(3);
    return answer;
}