#include <algorithm>
#include <vector>

typedef long long ll;

std::vector<int> primes;
bool isPrime[1 << 20];

int solution(int n)
{
    int answer = 0;

    std::fill_n(isPrime, 1010101, true);
    isPrime[1] = false;

    for (ll i = 2; i <= 1000000; i++)
    {
        if (!isPrime[i])
            continue;
        primes.push_back(i);
        for (ll j = i * i; j <= 1000000; j += i)
        {
            isPrime[j] = false;
        }
    }

    answer = std::upper_bound(primes.begin(), primes.end(), n) - primes.begin();

    return answer;
}