#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    //현재 다리 상태 큐
    queue<int> bridge;
    //다리에 있는 트럭의 무게 총합
    int sum=0;
    //대기중인 트럭 순차 방문하기 위한 인덱스
    int truckIndex=0;

    while(1) {
        //1초 더해주기
        answer++;
        //다리의길이 만큼 bridge 큐가 커지면, 도착했다는 뜻
        //앞에꺼 빼주고 다리 무게 총합에서 빼주자
        if(bridge.size() == bridge_length) {
            sum-=bridge.front();
            bridge.pop();
        }

        //다리위의 무게의 총합이 무게 한도 보다 작으면 트럭 보내준다
        if(sum + truck_weights[truckIndex] <= weight) {
            //마지막 트럭이면 다리 길이를 더해주자
            if(truckIndex == truck_weights.size()-1) {
                answer+=bridge_length;
                break;
            }
            //다리에 트럭 하나씩 넣어주고, 무게도 추가해주자
            bridge.push(truck_weights[truckIndex]);
            sum+=truck_weights[truckIndex];
            truckIndex++;
        } else {
            //1초를 더해주기 위해 트럭이 못올라가면 빈칸을 밀어 넣어줌
            bridge.push(0);
        }
    }
    return answer;
}