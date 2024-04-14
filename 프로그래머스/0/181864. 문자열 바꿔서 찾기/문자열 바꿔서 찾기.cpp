#include<bits/stdc++.h>

using namespace std;

int solution(string myString, string pat) {
    string str="";
    for(auto c : myString) {
        if(c == 'A') str += 'B';
        else str += 'A';
    }
    
    if(str.find(pat) != string::npos) return 1;
    else return 0;
}