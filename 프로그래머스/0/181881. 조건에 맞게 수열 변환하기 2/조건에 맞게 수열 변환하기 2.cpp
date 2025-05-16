#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
     while (true) {
        vector<int> prev = arr;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if (arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] = arr[i] * 2 + 1;
            }
            // 나머지 경우는 변화 없음
        }

        if (arr == prev) break;
        answer++;
    }
    return answer;
}