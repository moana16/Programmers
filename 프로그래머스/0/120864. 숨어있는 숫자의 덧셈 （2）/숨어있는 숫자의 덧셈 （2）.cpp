#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string tmp;
    for(auto c : my_string) {
        if(isdigit(c)) tmp += c;
        else {
            if(tmp.length() != 0) {
                answer += stoi(tmp);
                tmp = "";
            }
        }
    }
    if(tmp.length() != 0) {
        answer += stoi(tmp);
        tmp = "";
    }
    
    return answer;
}