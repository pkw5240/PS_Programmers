#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string a = to_string(n);
    
    for(auto i : a){
        int temp = i-'0';
        answer.insert(answer.begin(), temp);
    }
    return answer;
}