#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int n = numLog[0];
    for(int i=1; i<numLog.size(); i++) {
        if(n - numLog[i] == 1) answer += 's';
        else if(n - numLog[i] == -1)answer += 'w';
        else if(n - numLog[i] == 10) answer += 'a';
        else answer += 'd';
        n = numLog[i];
    }
    return answer;
}