#include <string>
#include <vector>
#include <algorithm>

int N;
bool cmp(std::string &a, std::string &b)
{
    if (a[N] != b[N])
        return a[N] < b[N];
    return a < b;
}

std::vector<std::string> solution(std::vector<std::string> strings, int n)
{
    N = n;
    std::sort(strings.begin(), strings.end(), cmp);
    return strings;
}