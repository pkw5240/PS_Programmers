#include <vector>
#include <algorithm>

int cnt[505];

bool cmp(int x, int y)
{
    double lhs = (cnt[x]) ? (1.0 * (cnt[x] - cnt[x + 1]) / cnt[x]) : 0;
    double rhs = (cnt[y]) ? (1.0 * (cnt[y] - cnt[y + 1]) / cnt[y]) : 0;
    if (std::abs(lhs - rhs) < 1e-12)
        return x < y;
    return lhs > rhs;
}

std::vector<int> solution(int N, std::vector<int> stages)
{
    std::vector<int> answer;

    for (int i = 0; i < stages.size(); i++)
    {
        cnt[stages[i]]++;
    }
    for (int i = N; i > 0; i--)
    {
        cnt[i] += cnt[i + 1];
        answer.push_back(i);
    }

    std::sort(answer.begin(), answer.end(), cmp);

    return answer;
}