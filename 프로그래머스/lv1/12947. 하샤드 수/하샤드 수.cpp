#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n=0;
    int tmp = x;
    while(true) {
        if(tmp < 10) {n+= tmp; break;}
        else n += tmp%10;
        tmp = tmp/10;
    }
    cout<<n;
    if(x % n != 0) answer = false;
    
    return answer;
}