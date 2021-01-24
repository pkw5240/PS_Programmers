#include <string>
#include <algorithm>

bool cmp(const char &a, const char &b){
    return a > b;
}

std::string solution(std::string s) {
    std::sort(s.begin(),s.end(),cmp);
    return s;
}