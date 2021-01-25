#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(string s) {
    int answer = 0;
    int i=0;
    
    int sign = 1;
    
    if(s[i] == '-') {sign=-1; i++;}
    else if(s[i] == '+') { i++;}
    
    for(;i<s.length();i++){
        answer = answer*10+(s[i]-'0');
    }
    answer*=sign;
    return answer;
}