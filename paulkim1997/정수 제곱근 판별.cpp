#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    //제곱근을 int형으로 강제 형변환해 소수점 제거
    //뺐을때 0이면 제곱근은 정수
    if(sqrt(n) - int(sqrt(n)) == 0) {
        answer = (sqrt(n)+1)*(sqrt(n)+1);
    } else
        return -1;

    return answer;
}