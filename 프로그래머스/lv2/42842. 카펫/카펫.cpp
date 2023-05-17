#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    queue<pair<int,int>> divisor;
    
    //1. yellow의 약수 구하기
    if(yellow == 1) {
        divisor.push({1,1});
        
    }
    else {
        for(int i=1; i<=yellow/2; i++) {
            if(yellow % i == 0) {
                divisor.push({i,yellow/i});
            }
        }
    }
    while(!divisor.empty()) {
        int x = divisor.front().first;
        int y = divisor.front().second;
        divisor.pop();
        
        if(x + y == (brown - 4)/2) {
            if(x <= y) {
                answer.push_back(y+2);
                answer.push_back(x+2);
            }
            else {
                answer.push_back(x+2);
                answer.push_back(y+2);
                
            }
            break;
        }
        
    }
    
    
    return answer;
}