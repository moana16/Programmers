#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> sum;
    
    int sz = elements.size();
    for(int i=1; i<=sz; i++) {
        for(int j=0; j<sz; j++) {
            int k = i;
            int total = 0;
            int t = j;
            while(k--) {
                total += elements[t%sz];
                t++;
            }
            sum.push_back(total);
        }
    }
    set<int> s(sum.begin(),sum.end());
    return s.size();
}