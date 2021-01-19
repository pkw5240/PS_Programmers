#include <string>
#include <vector>
#include <map>

std::string solution(std::vector<std::string> participant, std::vector<std::string> completion) {
    std::map<std::string,int> mp;
    
    for(int i = 0; i < participant.size(); i++) mp[participant[i]]++;
    for(int i = 0; i < completion.size(); i++) if(!--mp[completion[i]])mp.erase(completion[i]);
    
    return mp.begin()->first;
}