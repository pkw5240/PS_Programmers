#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    //0이 될때까지 10으로 나눈 나머지를 더해주고
    //10으로 나눈 몫으로 지정
    // 123 % 10 = 3 더해주고
    // --> 123 / 10 = 12
    // 12 % 10 = 2 더해주고
    // --> 12 / 10 = 1 등등
    while(n) {
        answer+=n%10;
        n/=10;
    }
    return answer;
}