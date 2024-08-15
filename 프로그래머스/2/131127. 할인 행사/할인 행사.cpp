#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string,int> wants;
    map<string, int> d;
    for(int i=0; i<want.size(); i++) {
        wants[want[i]] = number[i];
    }

    
    for(int i=0; i<discount.size(); i++) {
        d[discount[i]]++;
        if(i >= 9) {
            int flag = true;
            for(auto c : want) {
                if(wants[c] > d[c]) {
                    flag = false;
                    break;
                }
            }
            if(flag) answer++;
            d[discount[i-9]]--;
        }
        
        
    }
    return answer;
}