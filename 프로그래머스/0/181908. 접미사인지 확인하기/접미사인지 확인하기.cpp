#include <string>
using namespace std;

int solution(string my_string, string is_suffix) {
    // If the suffix is longer than the string, it cannot be a suffix
    if (is_suffix.length() > my_string.length()) return 0;

    // Check if the end of my_string matches is_suffix
    return my_string.substr(my_string.length() - is_suffix.length()) == is_suffix ? 1 : 0;
}
