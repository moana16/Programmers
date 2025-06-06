#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    for (int i = 0; i < num_list.size(); i += n) {
        vector<int> temp;
        for (int j = 0; j < n && i + j < num_list.size(); j++) {
            temp.push_back(num_list[i + j]);
        }
        answer.push_back(temp);
    }

    return answer;
}
