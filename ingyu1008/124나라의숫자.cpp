#include <string>
#include <algorithm>
#include <vector>

std::string solution(int n)
{
    std::string answer = "";
    while (n)
    {
        char c = '0' + (n % 3);
        if (c == '0')
            c = '4';
        answer = c + answer;
        n /= 3;
        n -= (c == '4');
    }

    return answer;
}