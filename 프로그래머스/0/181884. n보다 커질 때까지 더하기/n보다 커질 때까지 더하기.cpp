#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(auto num : numbers) {
        answer += num;
        if(n < answer) break;
    }
    return answer;
}