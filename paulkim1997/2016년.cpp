//요일을 구하는 첼러의 합동식 공식 사용했습니다
//https://terms.naver.com/entry.nhn?docId=3534029&cid=60209&categoryId=60209

#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    int ya=20;
    int yb=16;
    string days[7] = {"SAT","SUN","MON","TUE","WED","THU","FRI"};
    if(a==1 || a==2) {
        a+=12;
        yb-=1;
    }
    int h = ((b + 13*(a+1)/5 + yb + yb/4 + ya/4 - 2*ya) % 7);
    answer = days[h];
    return answer;
}