#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int GCD(int a, int b) {
    int A = max(a,b);
    int B = min(a,b);
    
    while(A % B != 0) {
        int C = A % B;
        A = B;
        B = C;
    }
    return B;
}

int solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int answer = arr[0];
    for(int i=1; i<arr.size(); i++) {
        int gcd = GCD(answer,arr[i]);
        int lcm = answer * arr[i] / gcd;
        answer = lcm;
    }
    return answer;
}