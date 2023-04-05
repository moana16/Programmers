#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    vector<string> v = {"zero", "one", "two", "three", "four", "five","six","seven","eight","nine"," "};
    vector<string> nl = {"0","1","2","3","4","5","6","7","8","9"," "};
    int answer = 0;
    string ans = "";
    while(s.length() != 0) {
        for(int i=1; i<6; i++) {
            string num= s.substr(0,i);
            auto it = find(v.begin(),v.end(),num);
            auto it_n = find(nl.begin(), nl.end(),num);
            if(it == v.end() && it_n == nl.end()) continue;
            else if(num.size() == 1) {
                string a = to_string(it_n-nl.begin());
                ans += a;
                s = s.substr(i);
                break;
            }
            else {
                string a = to_string(it-v.begin());
                ans += a;
                s = s.substr(i);
                break;
            }
        }
    }
    answer = stoi(ans);
    return answer;
}