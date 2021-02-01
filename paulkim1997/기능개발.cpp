#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int current = 0;
    int day = 0;
    //끝에 도달할때까지 반복
    while(current!=progresses.size()) {
        int count=0;
        //하루씩 더한다
        day++;
        //current는 0부터 시작하는데, 배포가 가능한 상태가 되면 1더해줌
        for(int i=current;i<progresses.size();i++) {
            //배포가 가능한 상태면
            if(progresses[current] + speeds[current]*day > 99) {
                current++;
                count++;
            }
        }

        if(count != 0){
            answer.push_back(count);
        }
    }

    return answer;
}

int main() {
    solution({93,30,55},{1,30,5});
}