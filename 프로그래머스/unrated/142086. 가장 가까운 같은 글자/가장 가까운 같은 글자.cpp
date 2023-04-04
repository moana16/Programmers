#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for(int i=1; i<=s.length(); i++) {
        string sub = s.substr(0,i);
        if(count(sub.begin(),sub.end(),s[i-1]) == 1) answer.push_back(-1); //아예 하나 있는 문자
        else {
            cout<<i-1<<" ";
            for(int j=sub.length()-1; j>=0; j--) {
                if(sub[j-1] == s[i-1]) {
                    //cout<<j<<" "<<i<<'\n';
                    answer.push_back(i-j);
                    break;
                }
            } 
            
                
            }
            
        }
    
    return answer;
}