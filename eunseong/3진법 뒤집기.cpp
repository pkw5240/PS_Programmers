#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> SS;
    
    int mok, nam;
    
    while(n > 0){
        mok = n/3;
        nam = n%3;
        SS.push(nam);
        n = mok;
    }
    
    int cnt = 0;
    while(!SS.empty()){
        answer += SS.top() * pow(3,cnt);
        cnt++;
        SS.pop();
    }
    return answer;
}