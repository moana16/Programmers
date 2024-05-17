#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++) {
        if(flag[i]) {
            int cnt = arr[i] * 2;
            while(cnt--) answer.push_back(arr[i]);
        }
        else {
            if(!answer.empty()) {
                int cnt = arr[i];
                while(cnt--) answer.pop_back();
            }
        }
    }
    return answer;
}