#include <string>

int solution(std::string dartResult)
{
    int answer = 0;
    int ptr = 0;

    int prev = 0;
    while (ptr < dartResult.size())
    {
        int now = 0;
        while (dartResult[ptr] != 'S' && dartResult[ptr] != 'D' && dartResult[ptr] != 'T')
        {
            now *= 10;
            now += dartResult[ptr] - '0';
            ptr++;
        }
        if (dartResult[ptr] == 'D')
        {
            now = now * now;
        }
        else if (dartResult[ptr] == 'T')
        {
            now = now * now * now;
        }
        ptr++;
        if (dartResult[ptr] == '*')
        {
            now *= 2;
            answer += prev;
            ptr++;
        }
        else if (dartResult[ptr] == '#')
        {
            now *= -1;
            ptr++;
        }
        prev = now;
        answer += now;
    }

    return answer;
}