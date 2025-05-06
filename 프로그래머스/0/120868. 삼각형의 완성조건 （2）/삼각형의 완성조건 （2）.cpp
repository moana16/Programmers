#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    int a = sides[0], b = sides[1];
    
    // 가능한 정수 값의 범위는 (b - a + 1)부터 (a + b - 1)까지
    return (a + b - 1) - (b - a + 1) + 1;
}