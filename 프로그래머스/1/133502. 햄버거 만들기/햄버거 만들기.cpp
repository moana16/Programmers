#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> st;
    
    for(auto i : ingredient) {
        st.push(i);
        if(st.size() >= 4) {
            vector<int> v(4);
            for(int j=3; j>=0; j--) {
                v[j] = st.top();
                st.pop();
            }
            
            if(v[0] == 1 && v[1] == 2 && v[2] == 3 && v[3] == 1) {
                answer++;
            } else {
                for(int j=0; j<4; j++) {
                    st.push(v[j]);
                }
            }
        }
    }
    return answer;
}

