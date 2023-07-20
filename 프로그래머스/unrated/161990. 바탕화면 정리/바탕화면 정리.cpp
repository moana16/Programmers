#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> x;
    vector<int >y;
    for(int i=0; i<wallpaper.size(); i++) {
        for(int j=0; j<wallpaper[0].length(); j++) {
            if(wallpaper[i][j] == '#') {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    int x_min = *min_element(x.begin(),x.end());
    int x_max = *max_element(x.begin(),x.end());
    
    int y_min = *min_element(y.begin(),y.end());
    int y_max = *max_element(y.begin(),y.end());
    
    answer.push_back(x_min);
    answer.push_back(y_min);
    answer.push_back(x_max+1);
    answer.push_back(y_max+1);
    
    return answer;
}