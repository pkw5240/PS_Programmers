#include <string>
#include <vector>

std::string solution(int a, int b)
{
    std::string answer = "";
    std::string answers[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int cumdays[13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

    answer = answers[(cumdays[a] + b + 6) % 7];

    return answer;
}