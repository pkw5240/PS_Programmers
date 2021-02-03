#include <vector>

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds)
{
    std::vector<int> answer;
    int day = 0;
    int j = 0;
    for (int i = 0; i < progresses.size(); i++)
    {
        while (progresses[i] + day * speeds[i] < 100)
        {
            if (j)
            {
                answer.push_back(j);
                j = 0;
            }
            day++;
        }
        j++;
    }
    if (j)
        answer.push_back(j);

    return answer;
}