#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    if (dot[0] > 0 && dot[1] > 0) return 1; // 1사분면
    else if (dot[0] < 0 && dot[1] > 0) return 2; // 2사분면
    else if (dot[0] < 0 && dot[1] < 0) return 3; // 3사분면
    else return 4; // 4사분면
}