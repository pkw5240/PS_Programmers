#include <string>

bool solution(std::string s)
{
    int x = 0;
    
    for(int i = 0; i < s.size(); i++){
        x += (s[i]|32) == 'p'; // 'a' | 32 == 'A'
        x -= (s[i]|32) == 'y';
    }
    
    return !x;
}