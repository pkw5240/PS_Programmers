#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> PQ;
    queue<pair<int,int>> QQ;
    
    for(int i=0; i<priorities.size(); i++){
        PQ.push(priorities[i]);
        QQ.push({i,priorities[i]});
    }
    
    while(!QQ.empty()){
        pair<int,int> temp = QQ.front();
        QQ.pop();
        
        if(temp.second == PQ.top()){
            PQ.pop();
            answer += 1;
            
            if(temp.first == location) break;             
        }
        else QQ.push(temp);
    }
    
    return answer;    
}