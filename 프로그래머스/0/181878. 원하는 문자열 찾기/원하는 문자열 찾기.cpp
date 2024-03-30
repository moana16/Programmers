#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    if(myString.size() < pat.size()) return 0;
    string a,b;
    for(auto c : myString) a += tolower(c); 
    for(auto c : pat) b += tolower(c); 
    
    if(a.find(b) == string::npos) return 0;
    else return 1;
    return answer;
}