#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int cnt = 0;
    
    while(!progresses.empty()){
        if(progresses.front() >= 100){
            cnt++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }
        else{
            if(cnt != 0){
                answer.push_back(cnt);
                cnt =0;
            }
            for(int i=0; i<progresses.size(); i++){
                progresses[i] += speeds[i];
            }
        }
    }
    
    answer.push_back(cnt);
    
    return answer;
}