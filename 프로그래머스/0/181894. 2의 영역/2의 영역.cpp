#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(find(arr.begin(), arr.end(), 2) == arr.end()) answer.push_back(-1);
    else {
        auto it1 = find(arr.begin(), arr.end(), 2);
        auto it2 = find(arr.rbegin(), arr.rend(), 2);
        int start = distance(arr.begin(), it1);
        int end = arr.size() - 1 - distance(arr.rbegin(), it2);

        
        for(int i=start; i<=end; i++) answer.push_back(arr[i]);
    }
    return answer;
}