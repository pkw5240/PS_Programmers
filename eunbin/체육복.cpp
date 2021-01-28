#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> std(n,1);
    
    for(int i=0;i<lost.size();i++){
        std[lost[i]-1]--;
    }
    for(int i=0;i<reserve.size();i++){
        std[reserve[i]-1]++;
    }
    
    for(int i=0;i<n;i++){
        if(i-1>=0 && std[i-1] == 2 && std[i] == 0){
            std[i]++;
            std[i-1]--;
        }
        if(i+1<=n-1 && std[i+1] == 2 && std[i] == 0){
            std[i]++;
            std[i+1]--;
        }
    }
    
    for(int i=0;i<n;i++){
        if(std[i]>0) answer++;
    }
    return answer;
}
