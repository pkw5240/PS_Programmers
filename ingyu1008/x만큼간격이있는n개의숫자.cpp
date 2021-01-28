#include <vector>

typedef long long ll;

std::vector<ll> solution(int x, int n)
{
    std::vector<ll> answer;

    answer.push_back(x);

    for (int i = 0; i < n - 1; i++)
    {
        answer.push_back(answer[i] + x);
    }

    return answer;
}