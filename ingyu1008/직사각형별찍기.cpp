#include <iostream>

int main(void)
{
    int a, b;
    std::cin >> a >> b;
    std::string s;
    for (int i = 0; i < a; i++)
    {
        s += "*";
    }
    for (int i = 0; i < b; i++)
    {
        std::cout << s << "\n";
    }
    return 0;
}