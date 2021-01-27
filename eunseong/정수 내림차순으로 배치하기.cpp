#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


long long solution(long long n) {
    long long answer = 0;
    string aa = to_string(n);
    vector<int> VV;
    
    for(auto c : aa){
        VV.push_back(c-'0');
    }
    
    sort(VV.begin(), VV.end());
    
    int pw = 0;
    
    for(auto i : VV){
        answer += i*pow(10,pw);
        pw++;
    }
    
    return answer;
}