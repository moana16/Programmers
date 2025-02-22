#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1e9;
    for(int i=0; i<numbers.size(); i++) {
        for(int j=1; j<numbers.size(); j++) {
            if(i == j) continue;
            answer = max(answer, numbers[i]*numbers[j]);
        }
    }
    return answer;
}