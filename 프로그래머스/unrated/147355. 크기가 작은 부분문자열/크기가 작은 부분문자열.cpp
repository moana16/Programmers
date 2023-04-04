#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int n = p.length();
    long long int_p = stol(p);
    for(int i=0; i<t.length(); i++) {
        string str = t.substr(i,n);
        if(str.length() < n) continue;
        long long k = stol(str);
        cout<<k<<" ";
        if(k <= int_p) answer++;
    }
    return answer;
}