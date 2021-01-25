#include <string>

int solution(std::string s)
{
    int answer = 0;
    bool b = (s[0] == '-');

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-' || s[i] == '+')
            continue;
        answer *= 10;
        answer += s[i] - '0';
    }

    answer *= (b) ? -1 : 1;

    return answer;
}