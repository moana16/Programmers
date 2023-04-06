#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int total = 1;
    for(int i=1; i<food.size(); i++) {
        if(food[i] == 1) continue;
        else {
            if(food[i] % 2 == 0) { //개수가 짝수일때
                int cnt = food[i]/2;
                while(cnt--) answer += to_string(i);
            }
            else {
                int cnt = food[i]/2;
                while(cnt--) answer += to_string(i);
            }
        }
        
    }
    
    string up = answer;
    answer += "0";
    sort(up.begin(),up.end(),greater<>());
    answer += up;
    
    return answer;
}