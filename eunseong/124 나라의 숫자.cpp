#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace std;

string solution(int n) {
    string s = "";
    char list[4] = {'4','1','2'};
    stack<int> SS;
    
    while(n > 0){
        SS.push(n%3);
        if(n%3 == 0) n = n/3 -1;
        else n /=3;
    }

    
    while(!SS.empty()){
        s += list[SS.top()];
        SS.pop();
    }
    
    return s;
}