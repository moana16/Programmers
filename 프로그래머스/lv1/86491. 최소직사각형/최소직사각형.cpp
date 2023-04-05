#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_h = 0;
    int max_w = 0;
  
    for(int i=0; i<sizes.size(); i++) {
        if(sizes[i][0] > sizes[i][1]) swap(sizes[i][0],sizes[i][1]);
    }
    for(int i=0; i<sizes.size(); i++) {
        max_w = max(max_w,sizes[i][1]);
    }
    for(int i=0; i<sizes.size(); i++) {
        max_h = max(max_h,sizes[i][0]);
    }
    answer = max_w * max_h;
    
    
    return answer;
}