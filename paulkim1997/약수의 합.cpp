#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    //나누어 떨어지는것들 더해주자
    for(int i=1;i<=n;i++) {
        if(n%i==0)
            answer+=i;
    }
    return answer;
}
