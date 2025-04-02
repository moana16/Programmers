#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char,int> mp;
    for(auto c : my_string) {
        if(mp.find(c) == mp.end()) {
            mp[c]++;
            answer += c;
        } 
    }
    return answer;
}