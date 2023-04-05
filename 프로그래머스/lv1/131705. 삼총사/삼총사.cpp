#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;

    for(int i=0; i<number.size(); i++) {
        for(int j=i+1; j<number.size(); j++) {
            for(int t=j+1; t<number.size(); t++) {
                if(number[i] + number[j] + number[t] == 0) answer++; 
            }
                
        
        }
    }
    return answer;
}