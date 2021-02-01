#include <string>
#include <vector>

int solution(std::string skill, std::vector<std::string> skill_trees)
{
    int answer = 0;
    std::vector<int> pos(26,2147483647);
    for (int i = 0; i < skill.size(); i++)
    {
        pos[skill[i] - 'A'] = i;
    }

    for (int i = 0; i < skill_trees.size(); i++)
    {
        int max = 0;
        bool valid = true;
        for (int j = 0; j < skill_trees[i].size(); j++)
        {
            if(pos[skill_trees[i][j] - 'A'] < skill.size()){
                valid &= (pos[skill_trees[i][j] - 'A'] == max++);
            }
        }
        answer += !!(valid);
    }

    return answer;
}