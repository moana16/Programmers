#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s.length() == 1) return 1;
    while(true) {
        char x = s[0];
        int cnt_x=1; //x값 카운트
        int cnt_nx=0;
        for(int i=1; i<s.length(); i++) {
            if(x != s[i]) cnt_nx++;
            else cnt_x++;
            if(cnt_nx == cnt_x) {
                if(s.length()==1) return answer++;
                else s = s.substr(i+1);
                answer++;
                break;
            }else {
                if(i == s.length()-1) {
                    s = s.substr(i+1);
                    answer++;
                    break;
                }
            } 
        }
        
        if(s.length() ==1 ) {
            answer++;
            break;
        } 
        
        if(s.length() == 0 ) break;
  
    }
    
    return answer;
}