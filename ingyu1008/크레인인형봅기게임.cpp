#include <iostream>
#include <vector>
#include <stack>

int solution(std::vector<std::vector<int>> board, std::vector<int> moves)
{
    int answer = 0;

    std::stack<int> st; // 바구니

    for (auto it = moves.begin(); it != moves.end(); it++)
    {
        int now = 0;
        (*it)--; // 1-based -> 0-based
        while (board[now][*it] == 0 && now + 1 < board.size())
        {
            now++;
        }

        int chosen = board[now][*it]; // 선택
        board[now][*it] = 0;          // 0으로 바꿈

        if (chosen)
        {
            if (!st.empty() && st.top() == chosen)
            {
                st.pop();
                answer += 2;
            }
            else
            {
                st.push(chosen);
            }
        }
    }

    return answer;
}

int main(void)
{

    std::cout << solution({{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}}, {1, 5, 3, 5, 1, 2, 1, 4}) << "\n";

    return 0;
}