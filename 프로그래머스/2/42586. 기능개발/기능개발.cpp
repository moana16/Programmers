#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<pair<int,int>> st;
    int day= 1;
    for(int i=0; i<progresses.size(); i++) {
        st.push({progresses[i], i});
    }
    int cnt;
    
    while(!st.empty()) {
        cnt = 0;
        int num = st.front().first;
        int idx = st.front().second;
        while(true) {
            if(num + day * speeds[idx] >= 100) break;
            day++;
        }
        st.pop();
        cnt++;
        while(!st.empty() && st.front().first + (speeds[st.front().second] * day) >= 100) {

            st.pop();
            cnt++;
        }
        answer.push_back(cnt);
        
    }
    
    return answer;
}