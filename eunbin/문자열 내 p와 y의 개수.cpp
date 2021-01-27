#include <string>
#include <iostream>
using namespace std;

int pc,yc;

bool solution(string s)
{
    bool answer = true;
    
    for(int i=0;i<s.length();i++)  {
        if(s[i]=='p'||s[i]=='P') pc++;
        if(s[i]=='y'||s[i]=='Y') yc++;
    }
    return pc==yc;
}
