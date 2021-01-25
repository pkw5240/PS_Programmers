#include <string>

bool solution(std::string s) {
    bool answer = true;
    
    for(int i = 0; i < s.size(); i++){
        answer &= (s[i] >= '0' && s[i] <= '9');
    }
    answer &= (s.size() == 4 || s.size() == 6);
    
    return answer;
}