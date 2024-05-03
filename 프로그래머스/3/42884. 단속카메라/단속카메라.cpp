#include<bits/stdc++.h>

using namespace std;

bool comp(vector<int> &a, vector<int> &b) {
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 1;
    sort(routes.begin(), routes.end(), comp);
    int camera = routes[0][1];
    for(int i=1; i<routes.size(); i++) {
        if(routes[i][0] > camera) {
            camera = routes[i][1];
            answer++;
        }
    }
    return answer;
}