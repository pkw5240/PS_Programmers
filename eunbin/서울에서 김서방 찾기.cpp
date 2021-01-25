#include <bits/stdc++.h>

using namespace std;
 
string solution(vector<string> seoul) {
    string answer = "";
    int check = 0;
    
    for(int i=0;i<seoul.size();i++){
        
        if(seoul[i] == "Kim") {
            
            string num = to_string(i);
            answer +="김서방은 ";
            answer += num;
            answer +="에 있다";
            check = 1;
            
        }
        
        if(check == 1) break;
    }
    
        
    return answer;
}

