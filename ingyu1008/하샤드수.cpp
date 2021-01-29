bool solution(int x)
{
    int y = x;
    int z = 0;

    while (y)
    {
        z += y % 10;
        y /= 10;
    }

    return !(x % z);
}