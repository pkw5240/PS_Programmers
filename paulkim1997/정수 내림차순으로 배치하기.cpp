#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer =0;
    vector<int> numbers;

    //각 자릿수들 배열에 저장
    while(n) {
        numbers.push_back(n%10);
        n /= 10;
    }

    //정렬
    sort(numbers.begin(), numbers.end());

    //새로운 수 만들어주기
    for(int i=0;i<numbers.size();i++) {
        answer += pow(10,i) * numbers[i];
    }

    return answer;
}