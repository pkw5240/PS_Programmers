#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    stack<char> mark;
    for(auto c : dartResult) mark.push(c);
    
    bool before = false, now = false;
    
    while(!mark.empty()){    
        int opt,bouns,num;
        if(mark.top() == '*' || mark.top() =='#'){
            char option = mark.top();
            mark.pop(); 
            
            if(option == '*'){
                opt = 2;
                before = true;
            } 
            if(option == '#') opt = -1;
        }
        else opt = 1;
        printf("option :: %d\n",opt);
        
        if(mark.top() == 'S') bouns = 1;
        if(mark.top() == 'D') bouns = 2;
        if(mark.top() == 'T') bouns = 3;            
        mark.pop();
        
        num = mark.top()-'0';
        mark.pop();
        
        printf("숫자 : %d\n", num);
        
        if(!mark.empty() && mark.top() == '1'){
            num = 10;
            mark.pop();
        }
        
        num = pow(num,bouns)*opt;
        
        if(now == true){
            num *=2;
            now = false;
        }
        
        if(before == true){
            before = false;
            now = true;
        }

        answer += num;
    }
    
    return answer;
}