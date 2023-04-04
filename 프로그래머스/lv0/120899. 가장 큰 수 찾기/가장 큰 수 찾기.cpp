#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int pos = max_element(array.begin(), array.end())-array.begin();
    answer.push_back(array[pos]);
    answer.push_back(pos);
    
    return answer;
}