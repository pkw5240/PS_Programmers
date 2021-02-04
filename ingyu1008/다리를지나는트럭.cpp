#include <string>
#include <vector>
#include <queue>

int solution(int bridge_length, int weight, std::vector<int> truck_weights)
{
    std::queue<std::pair<int, int>> q; //트럭무게, 시작시간

    int total = 0;
    int tick = 1;
    for (int i = 0; i < truck_weights.size(); i++)
    {
        while (total + truck_weights[i] > weight)
        {
            tick = std::max(tick, q.front().second + bridge_length);
            total -= q.front().first;
            q.pop();
        }
        total += truck_weights[i];
        q.push({truck_weights[i], tick});
        tick++;
    }

    while (!q.empty())
    {
        tick = q.front().second + bridge_length;
        q.pop();
    }
    return tick;
}