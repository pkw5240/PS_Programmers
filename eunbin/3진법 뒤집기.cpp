#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    
    while(n)
    {
        v.push_back(n % 3);
        n = n / 3;
    }
    
    reverse(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++)
        answer += pow(3, i) * v[i];
    
    return answer;
}