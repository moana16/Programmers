#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    bool isSame = false;
    if(A.compare(B) == 0) return 0;
    for(int i=0; i<A.length(); i++) {
        char c = A.back();
        A.pop_back();
        A.insert(0,1,c);
        answer++;
        if(A.compare(B) == 0) {
            isSame = true;
            break;
        } 
    }
    if(!isSame) answer = -1;
    return answer;
}