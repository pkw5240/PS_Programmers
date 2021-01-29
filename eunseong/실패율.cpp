#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<double, int> &a, pair<double, int> &b){
    
    if(a.first == b.first){
        if(a.second < b.second) return a.second <  b.second;
    }
    
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    int people = stages.size();
    double ing[N+2];
    vector<pair<double,int>> VV;
    
    //동적배열 초기화
    fill(ing,ing+N+2,0);
    
    for(int i=0; i<people; i++) ing[stages[i]]++;
    
    int sum = 0;
    for(int i=1; i<N+1; i++){
        sum += ing[i-1];
        double temp;
        if(people -sum == 0) temp = 0;
        else temp = (double)ing[i]/(people-sum);
        VV.push_back({temp, i});
    }
    
    sort(VV.begin(), VV.end(),cmp);
    for(int i=0; i<N; i++){
        answer.push_back(VV[i].second);
    }
    
    return answer;
}