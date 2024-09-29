#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c : my_string) 
        if(isupper(c)) answer += tolower(c);
        else answer += toupper(c);
    return answer;
}