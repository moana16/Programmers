#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum=0;
    for(int i=0; i<num; i++) sum += i;
    total = total - sum;
    int x = total / num;
    for(int i=0; i<num; i++) {
        answer.push_back(x);
        x++;
    }
    
    
    return answer;
}