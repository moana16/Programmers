#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    for(int i=0; i<name.size(); i++) {
        m.insert({name[i], yearning[i]});
    }
    
    for(auto r : photo) {
        int ans=0;
        for(auto i : r) {
            if(m.find(i) != m.end()) ans += m.find(i)->second;
        }
        answer.push_back(ans);
    }
    return answer;
}