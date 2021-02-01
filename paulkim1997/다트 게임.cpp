#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> sums;
    string temp;

    //전체 문자열 탐색
    for(int i =0 ;i<dartResult.size();i++) {
        //S,D,T,*,#이 아닐 때 , 즉 숫자인 경우
        if(dartResult[i] != 'S' && dartResult[i] != 'D' && dartResult[i] != 'T' && dartResult[i] != '*' && dartResult[i] != '#') {
            //2자리 정수 올때 temp라는 문자열에 "10"이라고 저장
            temp += dartResult[i];
        } else {
            int currentNum= 0;
            //temp문자열이 비어있지않으면 정수로 변경
            if(!temp.empty())
                currentNum= stoi(temp);
            int result =0;
            if(dartResult[i] == 'S') {
                result = pow(currentNum,1);
                sums.push_back(result);
                temp ="";
            } else if(dartResult[i] == 'D') {
                result = pow(currentNum,2);
                sums.push_back(result);
                temp ="";
            } else if(dartResult[i] == 'T') {
                result = pow(currentNum,3);
                sums.push_back(result);
                temp ="";
            } else if(dartResult[i] == '*') {
                if(sums.size()>1) {
                    sums[sums.size()-1] *= 2;
                    sums[sums.size()-2] *= 2;
                } else {
                    sums[sums.size()-1] *= 2;
                }
            } else if(dartResult[i] == '#') {
                sums[sums.size()-1] *= -1;
            }
        }
    }
    for(int i=0;i<sums.size();i++) {
        answer += sums[i];
    }
    return answer;
}