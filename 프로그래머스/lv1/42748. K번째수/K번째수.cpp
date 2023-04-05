#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto com : commands) {
        int i = com[0];
        int j = com[1];
        int k = com[2];
        vector<int> v;
        //cout<<i<<" "<<j;
        int length = j-i+1;
        //cout<<length;
        while(length--) {
            v.push_back(array[i-1]);
            cout<<array[i-1]<<" ";
            i++;
        }
        cout<<'\n';
        sort(v.begin(),v.end());
        answer.push_back(v[k-1]);
    }
    return answer;
}