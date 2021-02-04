#include <string>
#include <vector>

int solution(std::string name)
{
    int answer = 0;
    std::vector<int> v;

    for (int i = 0; i < name.size(); i++)
    {
        int x = name[i] - 'A';
        answer += std::min(x, 26 - x);
        if (x)
            v.push_back(i);
    }

    int min = 2147483647;

    for (int i = 0; i < v.size() - 1; i++)
    {
        min = std::min(min, 2 * v[i] + (int)(name.size() - v[i + 1]));
    }

    return answer + min;
}