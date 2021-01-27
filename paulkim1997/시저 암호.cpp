#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n) {
    string answer = "";

    for(int i=0;i<s.length();i++) {
        //문자일때
        if(isalpha(s[i])) {
            //소문자 중에 z넘어가면
            if(s[i]+n>90 && s[i]+n<115 && s[i]<91) {
                char temp = s[i]+n-26;
                answer+=temp;
            }//대문자 중에 Z넘어가면
            else if(s[i]+n>122) {
                char temp = s[i]+n-26;
                answer+=temp;
            }//다른 문자들
            else {
                char temp = s[i]+n;
                answer+=temp;
            }
        }//공백일때
        else
            answer += s[i];
    }
    return answer;
}