#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    //주식 가격 만큼 반복
    for(int i=0;i<prices.size();i++) {
        int price = 0;
        //i번째 주식 가격에 대해 i+1번 부터 끝까지 비교해
        //가격이 언제 떨어지는지 체크
        for(int j=i+1;j<prices.size();j++) {
            //가격이 안떨어진다면 1 더해주면서 지속
            if(prices[i] <= prices[j])
                price++;
            //가격이 떨어졌다면 1초 더해주고 빠져나옴
            else {
                price++;
                break;
            }
        }
        answer.push_back(price);

    }
    return answer;
}