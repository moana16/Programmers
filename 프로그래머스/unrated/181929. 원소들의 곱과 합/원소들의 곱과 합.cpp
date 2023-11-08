#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int total = 1;
    for(auto n : num_list) {
        total *= n;
    }
    int sum = accumulate(num_list.begin(),num_list.end(),0);
    if(pow(sum,2) > total) return 1;
    else return 0;
}