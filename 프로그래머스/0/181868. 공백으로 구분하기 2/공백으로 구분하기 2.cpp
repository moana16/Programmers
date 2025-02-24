#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp;
    for(auto c : my_string) {
        if(c != ' ') {
            tmp += c;
        }else {
            if(tmp.length() != 0) answer.push_back(tmp);
            tmp = "";
        }
    }
    if(tmp.length() != 0) answer.push_back(tmp);
    return answer;
}