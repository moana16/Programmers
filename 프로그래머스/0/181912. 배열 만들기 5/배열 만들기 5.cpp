#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer; 
    for(auto str : intStrs) {
        string n = str.substr(s,l);
        int num = stoi(n);
        if(num > k) answer.push_back(num);
    }
    return answer;
}