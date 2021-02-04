#include <string>
#include <vector>

bool isValid(std::string &s)
{
    bool res = true;
    int l = 0, r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            l++;
        else
            r++;
        if (r > l)
        {
            res = false;
            break;
        }
    }
    return res;
}

std::string reverse(std::string &s)
{
    std::string res = "";
    for (int i = 1; i < s.size() - 1; i++)
    {
        res += (s[i] == ')') ? "(" : ")";
    }
    return res;
}

std::string solve(std::string &s)
{
    if (s == "")
        return s;

    int l = (s[0] == '(');
    int r = (s[0] == ')');
    while (s.size() > l + r && l != r)
    {
        if (s[l + r] == '(')
            l++;
        else
            r++;
    }
    std::string u = s.substr(0, l + r);
    std::string v = s.substr(l + r);
    if (isValid(u))
    {
        return u + solve(v);
    }
    else
    {
        std::string res = "(";
        res += solve(v);
        res += ")";
        res += reverse(u);
        return res;
    }
}

std::string solution(std::string p)
{
    std::string answer = solve(p);

    return answer;
}