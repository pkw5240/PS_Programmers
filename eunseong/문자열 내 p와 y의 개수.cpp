#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a=0;
    int b=0;
    
    for(auto i : s){
        cout << i << endl;
        if(i == 'p' || i == 'P') a++;
        if(i == 'Y' || i == 'y') b++;
    }
    
    if(a==b) answer = true;
    else answer = false;
    
    return answer;
}