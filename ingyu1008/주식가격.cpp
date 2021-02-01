#include <vector>
#include <stack>

std::vector<int> solution(std::vector<int> prices)
{
    std::vector<int> answer(prices.size());
    std::stack<std::pair<int, int>> st; //monotone stack, desc
    for (int i = 0; i < prices.size(); i++)
    {
        while (!st.empty() && st.top() > std::make_pair(prices[i], i))
        {
            answer[st.top().second] = i - st.top().second;
            st.pop();
        }
        st.push({prices[i], i});
    }
    while(!st.empty()){
        answer[st.top().second] = prices.size() - 1 - st.top().second;
        st.pop();
    }

    return answer;
}