#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string cal(int n, int fre){
    string dd ="";
    int cnt =0;
    
    while(cnt < fre){
        
        if(n%2 == 0) dd += " ";
        else dd += "#";
        n /= 2;
        cnt++;
    }
    
    reverse(dd.begin(), dd.end());
    return dd;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++){
        answer.push_back( cal(arr1[i]|arr2[i], n) );
    }
    
    return answer;
}