#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q : queries) {
        int ans = -1;
        for(int i=q[0]; i<=q[1]; i++) {
            if(q[2] < arr[i]) {
                if(ans == -1) ans = arr[i];
                else {
                    ans = min(ans, arr[i]);
                }
            }
        }
        answer.push_back(ans);
    }
    return answer;
}