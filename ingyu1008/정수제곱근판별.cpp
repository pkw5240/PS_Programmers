typedef long long ll;

ll solution(ll n)
{
    ll answer = -1;

    ll lo = 1;
    ll hi = 80808080;

    while (lo <= hi)
    {
        ll m = (lo + hi) >> 1;
        if (m * m == n)
        {
            answer = (m + 1) * (m + 1);
            break;
        }
        else if (m * m > n)
        {
            hi = m - 1;
        }
        else
        {
            lo = m + 1;
        }
    }

    return answer;
}