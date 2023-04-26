#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int total = 0;
    int cnt =0;
    while(s.length() != 1 ) {
        cnt++;
        string str;
        for(auto c : s) {
            if(c == '1') str.push_back(c);
            else total++;
        }
        cout<<str;
        int x = str.length();
        string bin;
        while(x != 0 ) {
            if(x%2 == 1) bin = '1' + bin;
            else bin = '0' + bin;
            x /= 2;
        }
        s = bin;
        if(s.length() ==1) break;
    }
    
    answer.push_back(cnt);
    answer.push_back(total);
    
    
    return answer;
}