#include <bits/stdc++.h>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int x[10] = {0}, y[10] = {0}; // 배열을 0으로 초기화

    for (char c : X) x[c - '0']++;
    for (char c : Y) y[c - '0']++;

    for (int i = 9; i >= 0; i--) {
        if (x[i] > 0 && y[i] > 0) {
            int count = min(x[i], y[i]);
            answer += string(count, '0' + i); // '0' + i로 문자를 생성하고 count만큼 반복
        }
    }

    if (answer.length() == 0) return "-1";
    if (answer[0] == '0') return "0";
    return answer;
}
