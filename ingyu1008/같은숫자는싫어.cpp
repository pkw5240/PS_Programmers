#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}