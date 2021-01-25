#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> leftovers; //3으로 나눈 나머지들 저장

    //0 될때까지 3으로 나누어 주면서 배열에 저장
    while(n > 0) {
        leftovers.push_back(n%3);
        n = n/3;
    }

    //앞뒤 반전 해주기
    reverse(leftovers.begin(), leftovers.end());

    //앞뒤 반전 된 배열로 다시 10진수로
    for(int i = 0 ; i<leftovers.size(); i++) {
        answer+=leftovers[i]*pow(3,i);
    }
    return answer;
}
