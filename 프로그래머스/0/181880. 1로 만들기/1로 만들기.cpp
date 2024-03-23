#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(auto num : num_list) {
        while(true) {
            if(num == 1) break;
            num /= 2;
            answer++;
        }
    }
    return answer;
}