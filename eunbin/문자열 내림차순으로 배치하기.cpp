#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    sort(s.begin(),s.end(),greater<char>());
    
    
    int len = s.length();
    vector <int> ascii(len);
    // 1. 아스키코드를 저장하기
    // 2. sort
    // 3. 다시 문자로 바꿔 저장하기
    
    for(int i=0; i<s.length(); i++){
        ascii[i] = (int)s[i];
    }
    
    sort(ascii.begin(),ascii.end(),greater<int>());
    
    for(int j=0;j < s.length();j++){
       answer += (char)ascii[j];
        
    }
   
    return s;
}