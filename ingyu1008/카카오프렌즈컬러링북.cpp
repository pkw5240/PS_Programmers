#include <vector>
#include <algorithm>
#include <iostream>

bool visited[111][111];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int dfs(std::vector<std::vector<int>> &picture, int r, int c, int colour)
{
    if (r < 0 || c < 0 || r >= picture.size() || c >= picture[r].size() || visited[r][c] || picture[r][c] != colour)
        return 0;
    visited[r][c] = true;
    int res = 1;
    for (int i = 0; i < 4; i++)
    {
        int rr = r + dir[i][0];
        int cc = c + dir[i][1];
        res += dfs(picture, rr, cc, colour);
    }
    return res;
}

std::vector<int> solution(int m, int n, std::vector<std::vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    for (int i = 0; i <= 100; i++)
    {
        std::fill_n(visited[i], 101, false);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!picture[i][j])
                continue;
            int res = dfs(picture, i, j, picture[i][j]);
            number_of_area += (res > 0);
            max_size_of_one_area = std::max(max_size_of_one_area, res);
        }
    }

    std::vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}