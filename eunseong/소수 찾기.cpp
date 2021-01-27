#include <string>
#include <vector>

#include <bits/stdc++.h>
using namespace std;

int find(int n){
    
    //소수 리스트
    vector<int> numbers = {2,3};
    
    if(n == 3) return 1;
    if(n%2 ==0) return 0;
    
    
    int index=0;
    int nn =0;
    
    //n이 소수들의 배수인 경우 탐색
    while( nn <= sqrt(n)){
        nn = numbers[index++];
        if( n % nn == 0) return 0;
    }

    //짝수는 소수가 아니므로 2씩 증가하면서 탐색
    for(int i = 3; i<=sqrt(n); i+=2){
        if(n%i == 0){
            return 0;
        }
    }
    numbers.push_back(n);
    return 1;
}

int solution(int n) {
    int answer = 1;
    
    for(int i=3; i<=n; i += 2){
        answer += find(i);
    }
    
    return answer;
}