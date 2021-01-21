#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto i : commands){
        
        vector<int> prev;
        prev.clear();
        
        prev.assign(array.begin() + i[0]-1, array.begin()+ i[1]);
        sort(prev.begin(), prev.end());
        
        answer.push_back(prev[i[2]-1]);
    }
    return answer;
}