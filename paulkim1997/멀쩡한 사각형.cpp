#include <bits/stdc++.h>
using namespace std;

long long solution(int w,int h) {
    long long answer = 0;
    long long temp = 0;
    for(int i=0;i<w;i++){
        //기존 코드에서 temp사용안했지만 연산 오버플로우 때문에 별도로 선언해줌
        temp = h*i;
        answer += temp/w;
    }
    answer *= 2;
    return answer;
}

int main() {
    solution(8,12);
}