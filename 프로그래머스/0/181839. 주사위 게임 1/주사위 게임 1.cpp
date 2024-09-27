#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    if(a%2 == 0 && b %2 == 0) return abs(a-b);
    else if(a%2 == 0 || b %2 == 0) return 2*(a + b);
    else return pow(a,2) + pow(b,2);
}