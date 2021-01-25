#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = false;
    
    int size = s.size();
    bool check;
    
    if(size == 4 || size == 6) answer = true;
   
    for(int i=0; i<s.size(); i++){
        if(s[i] < 48 || s[i] > 57 ){
            
            check = false;
            answer = answer & check;
        } 
    }
    return answer;
}