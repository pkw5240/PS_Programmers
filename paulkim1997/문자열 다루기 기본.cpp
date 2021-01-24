#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    bool answer = true;

    if(s.length()==4 || s.length()==6) {
        for(int i=0;i<s.length();i++) {
            if(isalpha(s[i])) {
                answer = false;
                break;
            }else {
                answer = true;
            }
        }
    } else
        answer = false;
    return answer;
}
