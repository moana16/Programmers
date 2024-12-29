#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(auto c : my_string) {
        if(string(1,c) != letter) answer += c;
    }
    return answer;
}