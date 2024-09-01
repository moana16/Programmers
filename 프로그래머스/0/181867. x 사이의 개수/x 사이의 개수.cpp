#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string str;
    
    for(auto c : myString) {
        if(c == 'x') {
            answer.push_back(str.length());
            str = "";
        }else str += c;
    }
    answer.push_back(str.length());
    return answer;
}