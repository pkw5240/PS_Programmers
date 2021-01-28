#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    if(n == 0) return 0;
    if(n == 1) return 1;
  
    for(int i =2; i<=sqrt(n); i++){
        if(n%i == 0){
            
            if(n/i == i) answer +=i;
            
            else{
                answer += i;
                answer += n/i;
            }
        }
    }
    
    answer += n;
    return answer;
}