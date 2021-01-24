#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;    
    int check[35]= {0,};
    
    for(int i=0; i<reserve.size(); i++) check[reserve[i]]++;
    for(int i=0; i<lost.size(); i++) check[lost[i]]--;
    
    for(int i=1; i<=n; i++){
        if(check[i] == -1) answer--;
    }
    
    for(int i =0; i<lost.size(); i++){
        if(check[lost[i]] == -1 && check[lost[i]+1] == 1){
            answer++;
            check[lost[i]+1]--;
        }
        else if(check[lost[i]] == -1 && check[lost[i]-1] == 1){
            answer++;
            check[lost[i]-1]--;
        }
    }
    return answer;
}