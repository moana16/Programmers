#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int tmp = sqrt(n);
    
    return pow(tmp,2) == n ? 1 : 2;
     
}