#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int students[31]={0,};

    //도둑맞기 전에 가능한 학생
    for(int i=0;i<n;i++) {
        students[i]++;
    }
    //도둑맞으면서 참여 못하는 사람 빼주기
    for(int i=0;i<lost.size();i++) {
        students[lost[i] - 1]--;
    }
    //여분 가져온 학생 더해주기
    for(int i=0;i<reserve.size();i++)
        students[reserve[i]-1]++;

    for(int i=0;i<n;i++) {
        //도둑맞은 학생의 경우
        if(students[i]==0) {
            //앞사람 빌려올 수 있는지 확인 후 빌림
            if(students[i-1]==2) {
                students[i-1]--;
                students[i]++;
            } else if(students[i+1]==2) { //뒷사람 빌려올 수 있는지 확인하고 빌림
                students[i+1]--;
                students[i]++;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout << students[i] << " ";
        if(students[i]!=0) {
            answer++;
        }
    }
    return answer;
}
