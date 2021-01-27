#include <vector>

std::vector<int> solution(std::vector<int> arr)
{
    std::vector<int> answer;

    int min = 2147483647;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        min = std::min(min, *it);
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        answer.push_back(*it);
        if (*it == min)
        {
            min = 2147483647;
            answer.pop_back();
        }
    }
    if (answer.empty())
        answer.push_back(-1);

    return answer;
}