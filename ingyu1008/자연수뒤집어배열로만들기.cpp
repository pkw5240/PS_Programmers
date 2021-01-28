#include <vector>
#include <algorithm>

typedef long long ll;

std::vector<int> solution(ll n)
{
    std::vector<int> answer;
    while (n)
    {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}