#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    stack<int> st;
    st.push(-1);
    for(int i=numbers.size()-1; i>=0; i--) {
        if(st.top() <= numbers[i]) {
            while(true) {
                if(st.top() > numbers[i] || st.top() == -1) break;
                st.pop();
            } 
            
        }
        answer.push_back(st.top());
        st.push(numbers[i]);
        
    }
    reverse(answer.begin(), answer.end());
    return answer;
}