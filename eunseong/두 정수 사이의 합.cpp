#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;    
    
    //a와 b 사이에 속한 정수들의 개수
    long long num = abs(a-b)+1;
    
    answer = (a+b)*num/2;
    
    return answer;
}