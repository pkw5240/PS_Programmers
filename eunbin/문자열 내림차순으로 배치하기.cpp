#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(),s.end(),greater());
    
    return stoll(s);
}
