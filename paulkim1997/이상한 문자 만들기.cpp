#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";

    //단어별로 짝/홀 인덱스
    int index=0;
    
    for(int i=0;i<s.length();i++) {
        //공백 만나면 index초기화 해줌
        if(s[i] == ' ') {
            index=0;
            continue;
        } else {
            //짝수번째 문자
            if(index%2==0) {
                s[i] = toupper(s[i]);
                index++;
            } //홀수번째 문자
            else {
                s[i] = tolower(s[i]);
                index++;
            }
        }
    }
    answer = s;
    return answer;
}