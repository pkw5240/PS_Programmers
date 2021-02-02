#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    //우선순위 저장하기 위한 자료구조
    queue<pair<int, int>> inputs;
    priority_queue<int> pq;
    //큐에 priorities 넣어주기
    for(int i=0;i<priorities.size();i++) {
        //<location, 우선순위> 형태의 pair생성
        inputs.push(make_pair(i,priorities[i]));
        //우선순위 저장
        pq.push(priorities[i]);
    }

    //
    while(!inputs.empty()) {
        //하나씩 꺼내본다
        int a = inputs.front().first; //location
        int b = inputs.front().second; //우선순위
        inputs.pop();
        //꺼낸 우선순위가 최고 우선순위면 뽑아주고, 횟수 ++
        if(b == pq.top()) {
            pq.pop();
            answer++;
            //원하는 location 이면 완료!
            if(a == location)
                break;
        } else {
            //아니면 큐 뒤에 넣어준다
            inputs.push(make_pair(a,b));
        }
   }

    return answer;
}