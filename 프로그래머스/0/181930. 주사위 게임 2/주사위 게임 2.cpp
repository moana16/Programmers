#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    if(a == b && a == c) return (a + b + c)*(a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    if(a == b && a != c || a == c && a != b || b == c && b != a) return (a + b + c)*(a*a + b*b + c*c);
    else return a+b+c;
}