#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{   
    int pnum=0, ynum = 0;
    
    for(int i = 0; i < s.length(); i++){
        
        if( s[i] == 'p' || s[i] == 'P') pnum++;
            
        if( s[i] == 'y' || s[i] == 'Y') ynum++;
     
    }
        
    if( pnum == ynum ) return true;
    else return false;
    
    
}