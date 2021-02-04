#include <string>
#include <vector>
#include <queue>

int tree[1 << 10];

void upd(int idx, int diff)
{
    while (idx < 1 << 10)
    {
        tree[idx] += diff;
        idx += idx & (-idx);
    }
}

int query(int idx)
{
    int sum = 0;
    while (idx)
    {
        sum += tree[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

int solution(std::vector<int> priorities, int location)
{
    int answer = 0;
    std::queue<int> q;

    for (int i = 0; i < priorities.size(); i++)
    {
        upd(priorities[i], 1);
        q.push(i);
    }

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (query(priorities[x]) == query(100))
        {
            upd(priorities[x], -1);
            answer++;
            if (location == x)
                break;
        }
        else
        {
            q.push(x);
        }
    } //다른 풀이가 있을 거 같은데 잘 모르겠네요

    return answer;
}