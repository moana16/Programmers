#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) {
    char ck = k + '0';
    cout<<ck;
    string str = to_string(num);
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ck) return i+1;
    }
    return -1;
  
}