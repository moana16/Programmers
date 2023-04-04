#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int n = phone_number.length();
    n -= 4;
    
    for(int i=0; i<n; i++) {
        phone_number[i] = '*';
        
    }
    
    return phone_number;
}