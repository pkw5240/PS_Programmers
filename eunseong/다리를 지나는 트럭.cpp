#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    
    vector<int> done;
    int time = 0;
    int curW = 0; 
    int i = 0;
    queue<pair<int,int>> mid;
    //{종료시간, 트럭번호}
    
    while(done.size() < truck_weights.size()){
        if(time == mid.front().first && !mid.empty()){
            curW -= truck_weights[mid.front().second];
            done.push_back(mid.front().second);
            mid.pop();
        }
        if(curW + truck_weights[i] <= weight){
            curW += truck_weights[i];
            mid.push({time+bridge_length,i});
            i++;
            
        }
        time++;
    }
    
    return time;
}