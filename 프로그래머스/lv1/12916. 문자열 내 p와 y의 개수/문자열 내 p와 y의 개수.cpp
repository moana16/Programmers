#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pcnt = 0;
    int ycnt = 0;
    pcnt += count(s.begin(), s.end(), 'p');
    pcnt += count(s.begin(), s.end(), 'P');
    ycnt += count(s.begin(), s.end(), 'y');
    ycnt += count(s.begin(), s.end(), 'Y');
    cout<<pcnt<<" "<<ycnt;
    if(pcnt == ycnt) answer = true;
    else answer = false;

    return answer;
}