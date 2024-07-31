#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int,int> ma;
    map<int,int> mb;
    
    for(auto t : topping) {
        mb[t]++;
    }
    
    for(auto t : topping) {
        mb[t]--;
        ma[t]++;
        
        if(mb[t] == 0) mb.erase(t);
        
        if(mb.size() == ma.size()) answer++;
    }
    
    return answer;
}