#include <vector>
#include <algorithm>

// arrary 크기 : N
// commands 크기 : M

// 전체 시간복잡도 = O(MNlgN) => M과 N이 커질 경우 시간초과, 문제 조건 상에선 OK

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands)
{
    std::vector<int> answer;

    for (int i = 0; i < commands.size(); i++)
    {
        std::vector<int> temp;
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
        {
            temp.push_back(array[j]); //새로운 벡터에 넣고
        }
        std::sort(temp.begin(), temp.end()); //정렬
        answer.push_back(temp[commands[i][2] - 1]);
    }

    return answer;
}