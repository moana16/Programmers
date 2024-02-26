#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l; i<=r; i++) {
        string s = to_string(i);
        bool flag = false;
        for(auto c : s) {
            if(c != '0' && c!= '5') {
                flag = true;
                break;
            }
        }
        if(!flag) answer.push_back(stoi(s));
    }
    if(answer.size() == 0) answer.push_back(-1);
    return answer;
}