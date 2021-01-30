#include <bits/stdc++.h>

using namespace std;
vector<int> v;
int solution(int n) {
    int answer = 0;
    while(n!=0){
        v.push_back(n%3);
        n/=3;        
    }
    for(int i=0;i<v.size();i++){
        answer+=v[i]*pow(3,v.size()-i-1);
    }
    return answer;
}
