#include <vector>

int gcd(int a, int b)
{
    while (a)
        a ^= b ^= a ^= b %= a;
    return b;
}

std::vector<int> solution(int n, int m)
{
    std::vector<int> answer;

    answer.push_back(gcd(n, m));
    answer.push_back(n * m / answer[0]);

    return answer;
}