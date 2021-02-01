#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    
    int answer = skill_trees.size();
    vector<string> list;
    
    for(auto s : skill_trees){
        string temp = "";
        for(int i=0; i<s.size(); i++){
            int index = skill.find(s[i]);
            if(index != string::npos){
                temp += s[i];
            }
        }
        list.push_back(temp);
    }
    
    for(auto s : list){
        for(int i=0; i<s.size(); i++){
            if(s[i] != skill[i]){
                answer--;
                break;
            }
        }
        
        
    }
    
    return answer;
}