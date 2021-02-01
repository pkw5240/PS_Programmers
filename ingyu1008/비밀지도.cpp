#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> solution(int n, std::vector<int> arr1, std::vector<int> arr2)
{
    std::vector<std::string> answer;
    std::vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] |= arr1[i] | arr2[i];
        answer.push_back("");
        for (int j = 0; j < n; j++)
        {
            if (temp[i] & 1)
                answer[i] += "#";
            else
                answer[i] += " ";
            temp[i] >>= 1;
        }
        std::reverse(answer[i].begin(), answer[i].end());
    }

    return answer;
}