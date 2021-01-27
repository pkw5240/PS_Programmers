#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    //문자열의 길이가 짝수일때 사용할 것들
    string answer1 = "";
    string answer2 = "";
    if(s.length()%2 != 0) {
        answer=s[s.length()/2];
    } else {
        answer1 =s[s.length()/2-1];
        answer2= s[s.length()/2];
        //원래 answer = s[s.length()/2-1] + s[s.length()/2]
        //로 하려 했는데 왜 안될까요?
        answer = answer1 + answer2;
    }
    return answer;
}
