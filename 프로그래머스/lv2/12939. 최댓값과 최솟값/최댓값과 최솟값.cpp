#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    stringstream ss(s);
    ss.str(s);
    
    string num;
    while(ss>>num) {
        
        int x = stoi(num);
        v.push_back(x);
    }
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    string mx_s = to_string(mx);
    string mn_s = to_string(mn);
    
    answer = mn_s+' '+mx_s;
    
    return answer;
   
}