#include <string>
#include <vector>

std::string solution(std::string phone_number)
{
    return phone_number.replace(phone_number.begin(), phone_number.end() - 4, std::string(phone_number.size() - 4, '*'));
}