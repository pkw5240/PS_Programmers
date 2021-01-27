#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;

    //0~n까지 모든 숫자 담는 배열
    int numbers[n+1];
    numbers[0] = 0;
    numbers[1] = 0;
    //모든 숫자 담아줌
    for(int i=2;i<=n;i++) {
        numbers[i]=i;
    }
    //기존에 풀이 방법은 모두 시간초과가 나서 인터넷 검색으로
    //에라토스테네스의 채 방법 찾아내 적용


    //탐색 시작
    for(int i=2;i<=n;i++) {
        //0이면 검색하지않고 다음 for문 조건으로
        if(numbers[i] == 0)
            continue;
        //소수를 찾으면 해당 소수의 배수들은 모두 0으로 처리해
        //검색에서 제외되게 만들어줌
        for(int j=i*2;j<=n+1;j+=i) {
            numbers[j] = 0;
        }
    }
    //소수가 아닌애들은 0이니까, 소수들 카운팅
    for(int i=0;i<n+1;i++) {
        if(numbers[i]!=0)
            answer++;
    }
    return answer;
}