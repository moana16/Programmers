#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string ans = "";
    vector<string> numlists;
    numlists.push_back("zero");
    numlists.push_back("one");
    numlists.push_back("two");
    numlists.push_back("three");
    numlists.push_back("four");
    numlists.push_back("five");
    numlists.push_back("six");
    numlists.push_back("seven");
    numlists.push_back("eight");
    numlists.push_back("nine");
    numlists.push_back("");
    

    while(numbers.length() != 0) {
        for(int i=1; i<6; i++) {
            string str = numbers.substr(0,i);
            if(find(numlists.begin(),numlists.end(),str) != numlists.end()) {
                int idx = find(numlists.begin(),numlists.end(),str)-numlists.begin();
                ans.push_back(idx + '0');
                numbers = numbers.substr(i);
                break;
            }
        }
        
        
    }
    answer = stol(ans);
    
    return answer;
}