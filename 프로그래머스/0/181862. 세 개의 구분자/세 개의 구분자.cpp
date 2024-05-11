#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str="";
    for(auto c : myStr) {
        if(c == 'a' || c == 'b' || c == 'c') {
            if(!str.empty()) {
                answer.push_back(str);
                str = "";
            }
            
        }
        else str += c;
        
    }
    if(!str.empty()) answer.push_back(str);
    if(answer.empty()) answer.push_back("EMPTY");
    return answer;
}