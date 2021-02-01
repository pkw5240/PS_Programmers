#include <bits/stdc++.h>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string temp1[n];
    string temp2[n];
    string answerS[n];

    //arr1에 대해 2진법으로 바꿔가며 1이면 # 추가해주고 아니면 빈칸
    //이 경우 9 이면 10010이 됨 -> 마지막에 reverse해줄 예정
    for(int i=0;i<n;i++) {
        while(arr1[i] != 0) {
             int temp = arr1[i]%2;
             arr1[i] = arr1[i]/2;
             if(temp == 1) {
                 temp1[i] +="#";
             } else {
                 temp1[i] += " ";
             }
        }
    }

    //arr2에 대해 2진법으로 바꿔가며 1이면 # 추가해주고 아니면 빈칸
    for(int i=0;i<n;i++) {
        while(arr2[i] != 0) {
            int temp = arr2[i]%2;
            arr2[i] = arr2[i]/2;
            if(temp == 1) {
                temp2[i] +="#";
            } else {
                temp2[i] += " ";
            }
        }
    }

    //최종 map만드는 로직, Map1과 Map2의 모든 원소 비교하며 하나라도 #이면 #추가
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(temp1[i][j] == '#' || temp2[i][j] == '#') {
                answerS[i] += "#";
            } else {
                answerS[i] += " ";
            }
        }
    }

    //리턴할 answer에 더해주면서 reverse작업
    for(int i=0;i<n;i++) {
        answer.push_back(answerS[i]);
        reverse(answer[i].begin(), answer[i].end());
    }

    for(int i=0;i<n;i++) {
        cout << answer[i] << endl;
    }
    return answer;
}