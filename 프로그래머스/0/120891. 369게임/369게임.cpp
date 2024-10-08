#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string num = to_string(order);
    for(auto c : num) {
        if(c == '3' || c == '6' || c == '9') answer++;
    }
    return answer;
}