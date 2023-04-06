#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(),score.end(),greater<>());
    int i=1;
    while(true) {
        if(score.size() >= m*i) {
            answer += score[m*i-1]*m;
            i++;
            
        }
        else break;
    }
    return answer;
}