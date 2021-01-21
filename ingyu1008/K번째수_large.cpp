#include <vector>
#include <algorithm>

// 머지소트트리 / 이분탐색을 이용한 풀이

// arrary 크기 : N
// commands 크기 : M

// 전체 시간복잡도 = O(NlgN + Mlg^3N) (백준 기준 플레 난이도)

// splay tree를 이용한 amortized O((N+M)lgN) 풀이도 존재

std::vector<int> tree[1 << 10];

void update(int node) //두 자식노드 병합
{
    tree[node].clear();
    tree[node].resize(tree[node*2].size() + tree[node*2+1].size());

    std::merge(tree[node*2].begin(),tree[node*2].end(),tree[node*2 + 1].begin(),tree[node*2 + 1].end(),tree[node].begin());
}

void init(int node, int l, int r, std::vector<int> &v) //트리 초기화
{
    if (l == r)
    {
        tree[node].push_back(v[l]);
        return;
    }

    int m = (l + r) >> 1;
    init(node * 2, l, m, v);
    init(node * 2 + 1, m + 1, r, v);
    update(node);
}

int query(int node, int l, int r, int s, int e, int x) // 구간 [s,e] 에서 x 보다 작은 원소의 개수
{
    if (l > e || r < s) // 노드와 구간이 겹치지 않는경우 0
    {
        return 0;
    }
    if (l >= s && r <= e) //완전히 포함되는 경우 이분탐색
    {
        return (std::lower_bound(tree[node].begin(), tree[node].end(), x) - tree[node].begin());
    }

    int m = (l + r) >> 1;

    return query(node * 2, l, m, s, e, x) + query(node * 2 + 1, m + 1, r, s, e, x);
}

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands)
{
    std::vector<int> answer;

    int N = array.size();
    init(1, 0, N - 1, array);

    for (int i = 0; i < commands.size(); i++)
    {
        int a = commands[i][0] - 1;
        int b = commands[i][1] - 1;
        int c = commands[i][2];

        int lo = 1;
        int hi = 100;
        int min = 100;
        while (lo <= hi) //이분 탐색
        {
            int m = (lo + hi) >> 1;

            int cnt = query(1, 0, N - 1, a, b, m + 1);
            if (cnt >= c)
            {
                hi = m - 1;
                min = std::min(min, m);
            }
            else
            {
                lo = m + 1;
            }
        }
        answer.push_back(min);
    }

    return answer;
}
