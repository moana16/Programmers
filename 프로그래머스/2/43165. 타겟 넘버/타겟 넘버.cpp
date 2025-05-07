#include <string>
#include <vector>

using namespace std;

int ans = 0;
void DFS(vector<int> numbers, int target, int cur, int idx, int N ) {
    if(idx == N) {
        if(cur == target) ans++;
        return;
    }
    DFS(numbers, target, cur+numbers[idx], idx+1, N);
    DFS(numbers, target, cur-numbers[idx], idx+1, N);
    return;
}

int solution(vector<int> numbers, int target) {
  
    DFS(numbers, target, 0, 0, numbers.size());
    return ans;
}