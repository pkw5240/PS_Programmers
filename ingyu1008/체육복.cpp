#include <vector>
#include <algorithm>

int solution(int n, std::vector<int> lost, std::vector<int> reserve)
{
    int answer = 0;

    std::vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(1); // 1개 초기값
    for (int x : reserve)
        v[x - 1]++; //여분을 가져왔을 경우 +1개
    for (int x : lost)
        v[x - 1]--; // 도난당한 경우 -1개

    for (int i = 0; i < n; i++)
    {
        if (v[i]) // 체육복을 가지고 있는 경우
        {
            v[i]--;                                 // 하나 감소
            answer++;                               // 정답 ++
            if (v[i] && i < n - 1 && v[i + 1] == 0) // 체육복이 남아 있고 다음 사람이 체육복이 없는 경우
            {
                v[i + 1]++; // 빌려줌
            }
        }
        else if (i < n - 1 && v[i + 1] == 2) // 체육복이 없는데 다음 사람이 2개를 가진 경우
        {
            v[i + 1]--; // 하나를 가져옴
            answer++;   // 정답 ++
        }
    }

    return answer;
}