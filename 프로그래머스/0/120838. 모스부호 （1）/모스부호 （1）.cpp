#include <bits/stdc++.h>

using namespace std;

string solution(string letter) {
    
    map<std::string, char> morse = {
    {".-", 'a'},   {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},  {".", 'e'},
    {"..-.", 'f'}, {"--.", 'g'},  {"....", 'h'}, {"..", 'i'},   {".---", 'j'},
    {"-.-", 'k'},  {".-..", 'l'}, {"--", 'm'},   {"-.", 'n'},   {"---", 'o'},
    {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},  {"...", 's'},  {"-", 't'},
    {"..-", 'u'},  {"...-", 'v'}, {".--", 'w'},  {"-..-", 'x'}, {"-.--", 'y'},
    {"--..", 'z'}
};
    
    string answer = "";
    stringstream ss(letter);
    
    string tmp;
    while(ss >> tmp) {
        answer += morse[tmp];
    }
    return answer;
}