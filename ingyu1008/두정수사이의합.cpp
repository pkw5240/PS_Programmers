#include <string>
#include <vector>

typedef long long ll;

ll solution(int a, int b)
{
    ll answer = 0;

    if (a > b)
        a ^= b ^= a ^= b;

    // NAIVE O(|b-a|)
    // for(int i = a; i <= b; i++){
    //     answer += i;
    // }

    // with Prefix Sum O(1)
    answer += 1LL * b * (b + 1) / 2;
    answer -= 1LL * a * (a - 1) / 2;

    return answer;
}