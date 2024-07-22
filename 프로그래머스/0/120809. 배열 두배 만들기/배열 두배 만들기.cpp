#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(auto c : numbers) answer.push_back(c*2);
    return answer;
}