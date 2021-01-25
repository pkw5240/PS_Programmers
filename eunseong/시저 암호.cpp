#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(auto i : s){
        
        int temp;
        if(i != ' '){
            if(i >= 'a' && i<='z'){
                temp = i + n; //아스키코드값 127까지라서 int로 계산
                if(temp > 122) temp -= 26;
            }
            
            if(i>='A' && i <= 'Z'){
                temp = i+n;
                if(temp > 90) temp -=26;
            }
            answer += (char)temp;
        }else{
            answer += i;
        }
        
    }
    return answer;
}