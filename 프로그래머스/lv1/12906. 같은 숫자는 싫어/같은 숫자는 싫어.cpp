#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    for(auto c : arr) {
        if(answer.empty() || answer.back() != c) answer.push_back(c);
        
    }
    

    return answer;
}