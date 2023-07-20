#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int bottles = n;
    while(true) {
        if(bottles < a) break;
        int v,s;
        v = bottles / a * b;
        s = bottles % a;
        bottles = v + s;
        answer += v;
        
        
    }
    return answer;
}

