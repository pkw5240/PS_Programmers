#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int j=0;j<commands.size();j++){
        vector<int> v={0,};
        
        for(int i=commands[j][0]-1;i<=commands[j][1]-1;i++){
        v.push_back(array[i]);        
        }
        
        sort(v.begin(),v.end());
        answer.push_back(v[commands[j][2]-1]);        
    }  
    
    return answer;
}