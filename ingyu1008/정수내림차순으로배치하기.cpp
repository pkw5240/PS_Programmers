#include <vector>
#include <algorithm>

typedef long long ll;

ll solution(ll n)
{
    ll answer = 0;
    std::vector<int> v;
    while (n)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    std::sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        answer *= 10;
        answer += v[i];
    }

    return answer;
}