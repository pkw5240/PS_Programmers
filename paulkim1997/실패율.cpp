#include <bits/stdc++.h>
using namespace std;

bool comp(pair<double,int> a, pair<double,int> b){
    //실패율 비교해서 정렬
    if(a.first > b.first) {
        return true;
    } //실패율 같으면 스테이지 번호 비교
    else if(a.first == b.first) {
        if(a.second< b.second) {
            return true;
        } else
            return false;
    } else
        return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>> failRateVector;
    double failRate;
    double tryUser;
    double failUser;

    //실패율 구하는 로직
    for(int i=0;i<N;i++) {
        //해당 스테이지 도전한 유저
        failUser=0;
        //해당 스테이지 성공 못하는 유저
        tryUser=0;
        for(int j =0;j<stages.size();j++) {
            if(stages[j]>=i+1) {
                tryUser++;
                if(stages[j] == i+1) {
                    failUser++;
                }
            }
        }
        //0으로 나눌때 예외처리
        if(tryUser == 0)
            tryUser=1;
        failRate = failUser/tryUser;
        failRateVector.push_back(make_pair(failRate,i+1));
    }

    sort(failRateVector.begin(), failRateVector.end(),comp);
    for(int i=0;i<N;i++) {
        answer.push_back(failRateVector[i].second);
    }
    return answer;
}