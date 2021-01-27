#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int len = s.length();
    if(len == 4 || len == 6){
        for(int i=0;i<len;i++){
            int ascii = (int)s[i];
            if(ascii<48 || ascii>57) break;
            if(i == len-1 ) answer = true;
        }  
    }
    
    return answer;
}