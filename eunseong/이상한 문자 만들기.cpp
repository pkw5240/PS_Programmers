#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    
    int i =0;
    
    for(auto c : s){
        if(c == ' ') i=-1;
        else{
            if(i%2==0){
                //짝수면 소문자를 대문자로
                if(c >= 'a' && c <= 'z') c -= ('a' - 'A');
            }
            else{
                if(c >= 'A' && c <= 'Z') c += ('a' - 'A');
            }         
        }
        answer += c;
        i++;
    }
    return answer;
}