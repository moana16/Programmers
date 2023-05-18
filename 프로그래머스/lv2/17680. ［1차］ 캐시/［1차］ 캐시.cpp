#include <bits/stdc++.h>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> v;
    if(cacheSize == 0) return cities.size()*5;
    else {
        
        for(int i=0; i<cities.size(); i++) {
            transform(cities[i].begin(),cities[i].end(),cities[i].begin(),::tolower);
            if(find(v.begin(),v.end(),cities[i]) != v.end()) {
                answer += 1;
                v.erase(remove(v.begin(),v.end(),cities[i]),v.end()); //hit 이지만 새롭게 사용되었으므로 삭제하고 다시 넣어주는 과정이 필요함
                v.push_back(cities[i]);
                
            }
            else {
                answer += 5;
                if(v.size() >= cacheSize) {
                    v.erase(v.begin());
                }
                v.push_back(cities[i]);
            }
            
        }
    }
    return answer;
}