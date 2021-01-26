#include <string>

std::string solution(std::string s)
{
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            j = 0;
            continue;
        }
        if (j++ & 1)
            s[i] |= 32;
        else
            s[i] &= ~32;
    }
    return s;
}