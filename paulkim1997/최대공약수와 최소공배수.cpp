#include <bits/stdc++.h>
using namespace std;

//재귀함수로 구현하려 했으나 시간초과 발생
//최대공약수
int gcd(int n, int m){
    while(m!=0) {
        int temp = n%m;
        n=m;
        m=temp;
    }
    return n;
}

//최소 공배수
int lcm(int n, int m) {
    return (m*n)/gcd(m,n);
}

vector<int> solution(int n, int m) {
    vector<int> answer;

    answer.push_back(gcd(m,n));
    answer.push_back(lcm(m,n));

    return answer;
}