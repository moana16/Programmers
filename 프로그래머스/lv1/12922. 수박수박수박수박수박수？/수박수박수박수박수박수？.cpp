#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string s = "수박";
    int cnt = 1;
    if(n % 2 == 0 ) {
        cnt = cnt*n/2;
        while(cnt--) answer += s;
    }
    else {
        cnt = cnt*n/2;
        while(cnt--) answer += s;
        answer += "수";
    }
    
   
    return answer;
}