#include <bits/stdc++.h>

using namespace std;

vector<char> v;

string solution(string s) {
    string answer = "";
    
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end(),greater<char>());
    
    for(char c:v) answer+=c;
    return answer;
}
