#include <string>
#include <vector>
#include <iostream>

using namespace std;
char ages[10] = {'a','b','c','d','e','f','g','h','i','j'};
string solution(int age) {
    string answer = "";
    string ageToString = to_string(age);
    
    for(auto c : ageToString) {
        answer += ages[c-'0'];
    }
    return answer;
}