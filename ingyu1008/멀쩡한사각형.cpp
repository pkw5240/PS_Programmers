typedef long long ll;

ll gcd(ll a, ll b)
{
    if (a > b)
        return gcd(b, a);
    while (a)
        a ^= b ^= a ^= b %= a;
    return b;
}

ll solution(int w, int h)
{
    ll answer = 1;

    if (w > h)
        return solution(h, w);

    ll mul = gcd(w, h);

    answer = w / mul + h / mul - 1;

    return 1LL * w * h - answer * mul;
}