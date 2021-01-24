#include <string>

std::string solution(std::string s, int n)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = ((s[i] - 'a') + n) % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = ((s[i] - 'A') + n) % 26 + 'A';
    }
    return s;
}