#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.length();
    if(size%2==0) answer+=s[size/2-1];
    answer+=s[size/2];
    return answer;
}
