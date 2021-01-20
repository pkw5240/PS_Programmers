#include <vector>
#include <set>

std::vector<int> solution(std::vector<int> numbers) {
    std::vector<int> answer;

    std::set<int> st;
    for (auto it = numbers.begin(); it != numbers.end(); it++) for (auto it2 = it + 1; it2 != numbers.end(); it2++) st.insert((*it) + (*it2));
    for (auto it = st.begin(); it != st.end(); it++) answer.push_back((*it));

    return answer;
}