#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(auto q : queries) {
        
        for(int i=q[0]; i<=q[1]; i++) arr[i] += 1;
    }
    return arr;
}