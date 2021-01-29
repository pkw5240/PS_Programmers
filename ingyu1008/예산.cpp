#include <vector>
#include <algorithm>

int solution(std::vector<int> d, int budget)
{
    int answer = 0;

    std::sort(d.begin(), d.end());

    while (answer < d.size() && d[answer] <= budget)
    {
        budget -= d[answer];
        answer++;
    }

    return answer;
}