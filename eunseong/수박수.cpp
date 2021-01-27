#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(int n) {
    string answer = "";
    string word = "수박";
    int cnt = n/2;
    
    while(cnt--){
        answer += word;
    }
    if(n%2 != 0){
        answer += "수";
    }
    return answer;
}