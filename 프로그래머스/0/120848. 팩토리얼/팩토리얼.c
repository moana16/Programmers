#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    for(int i=1; i<=n; i++) {
        answer *= i;
        if(answer == n) return i;
        if(answer > n) return i-1;
    }
    return 0;
}