#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int length = s.length();
    if(length%2 == 0) {
        answer = s.substr(length/2-1,2);
        cout<<answer;
        
        
    }
    else {
        answer = s[length/2];
    }
    return answer;
}