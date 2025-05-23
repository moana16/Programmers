#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> priority(emergency.begin(),emergency.end());
    sort(priority.begin(), priority.end(),greater<>());
    for(auto e : emergency) {
        int it = find(priority.begin(), priority.end(), e) - priority.begin();
        answer.push_back(it+1);
    }
    return answer;
}