#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int a = 0, b = 0;
    int flag = 0;
    for(auto c : binomial) {
        if(flag == 0 && isdigit(c)) a = a * 10 + (c - '0');
        else if(!isdigit(c) && c != ' ') {
            if(c == '+') flag = 1;
            else if(c == '-') flag = 2;
            else flag = 3;
        }
        else if(flag != 0 && isdigit(c)) {
            b = b * 10 + (c - '0');
            
        }
        
    }
    if(flag == 1) return a + b;
    else if(flag == 2) return a - b;
    else return a * b;
    
}