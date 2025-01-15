#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v = {'a','e','i','o','u'};
    
    for(auto c : my_string) {
        if(find(v.begin(), v.end(), c) == v.end()) answer.push_back(c);
    }
    return answer;
}