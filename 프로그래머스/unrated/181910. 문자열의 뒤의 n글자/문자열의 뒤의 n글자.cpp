#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    int l = my_string.length();
    n = l - n;
    return my_string.substr(n);
}