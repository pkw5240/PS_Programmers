#include <string>
#include <vector>

int dist(std::pair<int, int> &now, std::pair<int, int> &dest)
{
    return std::abs(now.first - dest.first) + std::abs(now.second - dest.second);
}

std::string solution(std::vector<int> numbers, std::string hand)
{
    std::string answer = "";

    std::pair<int, int> l = {0, 3}, r = {2, 3};

    std::pair<int, int> pos[10] = {{1, 3}, {0, 0}, {1, 0}, {2, 0}, {0, 1}, {1, 1}, {2, 1}, {0, 2}, {1, 2}, {2, 2}};

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 3 == 1 && numbers[i])
        {
            l = pos[numbers[i]];
            answer += "L";
        }
        else if (numbers[i] % 3 == 0 && numbers[i])
        {
            r = pos[numbers[i]];
            answer += "R";
        }
        else
        {
            int distl = dist(l, pos[numbers[i]]);
            int distr = dist(r, pos[numbers[i]]);

            if (distl == distr)
            {
                if (hand == "right")
                {
                    r = pos[numbers[i]];
                    answer += "R";
                }
                else
                {
                    l = pos[numbers[i]];
                    answer += "L";
                }
            }
            else if (distl > distr)
            {

                r = pos[numbers[i]];
                answer += "R";
            }
            else
            {

                l = pos[numbers[i]];
                answer += "L";
            }
        }
    }

    return answer;
}