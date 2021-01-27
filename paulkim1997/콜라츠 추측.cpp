#include <bits/stdc++.h>
using namespace std;

int solution(int num) {
    int answer = 0;
    //로직은 맞는데 왜 안되지 하고 찾아본 결과
    //변수 범위를 초과하면 테스트케이스가 틀리게 나옴
    //int형으로 들어온 변수를 long 형으로
    long number = num;
    while(number!=1) {
        //500 넘어가면 -1 리턴하고 break
        if(answer>=500) {
            answer = -1;
            break;
        }
        //짝수일때
        if(number%2==0) {
            number /= 2;
            answer++;
        }
        //홀수일때
        else {
            number = number * 3 + 1;
            answer++;
        }
    }
    cout << answer;
    return answer;
}