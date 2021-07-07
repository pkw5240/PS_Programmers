#include <string>

int solution(std::string s)
{
    int answer = 2147483647;

    for (int i = 1; i <= (s.size() + 1) / 2; i++)
    {
        std::string res = "";
        int cnt = 1;
        std::string temp = s.substr(0, i);
        for (int j = i; j < s.size(); j += i)
        {
            if (temp == s.substr(j, i))
                cnt++;
            else
            {
                if (cnt > 1)
                    res += std::to_string(cnt);
                res += temp;
                temp = s.substr(j, i);
                cnt = 1;
            }
        }

        if (cnt > 1)
            res += std::to_string(cnt);
        res += temp;
        answer = std::min(answer, (int)res.size());
    }

    return answer;
}