#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double total = 0;
    for(auto x : arr) {
        total += x;
    }
    answer = total / arr.size();
    return answer;
}