#include <string>
#include <vector>

std::string solution(std::string s)
{
    std::string answer = s.substr((s.size() - 1) / 2, (s.size() & 1) ? 1 : 2);
    return answer;
}