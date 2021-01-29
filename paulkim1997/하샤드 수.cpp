#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {
    bool answer = true;
    //자릿수의 총합
    int divider = 0;

    //변수 x 담아주는 변수
    int temp = x;

    //자릿수 구해서 더하기
    while(temp!=0) {
        divider += temp%10;
        temp /=10;
    }

    if(x%divider==0) {
        answer = true;
    } else
        answer = false;

    return answer;
}