#include <algorithm>
#include <vector>

std::vector<int> solution(std::vector<int> arr, int divisor)
{
    std::vector<int> answer;
    
    for (auto it = arr.begin(); it != arr.end(); it++)
        if (!(*it % divisor))
            answer.push_back(*it);
    
    std::sort(answer.begin(), answer.end());
    
    if (answer.empty())
        answer.push_back(-1);
    return answer;
}