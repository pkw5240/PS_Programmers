#include <string>
#include <iostream>
using namespace std;

char getLower(char& c){
    if('A'<=c && c<='Z') return c+'a'-'A';
    return c;
}

bool solution(string s)
{
    bool answer = true;
    
    int y=0, p=0;
    for(auto &iter : s){
        //소문자로 바꿔서 따지기
        char word = getLower(iter);
        if(word == 'p') p++;
        else if(word=='y') y++;
    }

    if(p==y) return true;
    
    return false;
}