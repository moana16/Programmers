#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(auto p : picture) {
        string str;
        for(auto c : p) {
            int tmp = k;
            while(tmp--) str += c;
            
        }
        int cnt = k;
        while(cnt--) answer.push_back(str);
        
    }
    return answer;
}