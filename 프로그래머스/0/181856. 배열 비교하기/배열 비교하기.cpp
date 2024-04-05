#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int a1 = arr1.size();
    int a2 = arr2.size();
    if(a1 > a2) return 1;
    else if(a1 < a2) return -1;
    else {
        int t1 = accumulate(arr1.begin(), arr1.end(),0);
        int t2 = accumulate(arr2.begin(), arr2.end(),0);
        
        if(t1 > t2) return 1;
        else if(t1 < t2) return -1;
        else return 0;
        
    }
    
    return answer;
}