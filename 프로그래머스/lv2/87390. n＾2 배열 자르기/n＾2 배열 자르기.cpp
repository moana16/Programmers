#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer(right - left + 1);
    long long index = 0;

    for (long long i = left; i <= right; ++i) {
        long long row = i / n;
        long long col = i % n;
        long long value = max(row, col) + 1;
        answer[index++] = value;
    }

    return answer;
}
