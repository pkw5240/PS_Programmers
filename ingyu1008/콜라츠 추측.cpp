typedef long long ll;
int solution(int num)
{
    int answer = 0;

    ll temp = num;

    while (answer < 500 && temp > 1)
    {
        answer += 1 + (temp & 1);
        if (temp & 1)
            temp = temp * 3 + 1;
        temp /= 2;
    }

    if (answer >= 500)
        answer = -1;

    return answer;
}