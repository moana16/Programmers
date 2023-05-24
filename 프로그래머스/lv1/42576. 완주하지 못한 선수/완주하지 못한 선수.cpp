#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    if(completion.size() == 0) return participant[0];
    for(int i = participant.size()-1; i >= 0 ; i--)
    {
        if(participant[i] == completion.back()) completion.pop_back();
        else return participant[i];
        
    }
    //return answer;
}