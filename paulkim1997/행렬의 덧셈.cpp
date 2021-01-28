#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> temp;

    for(int i=0;i<arr1.size();i++) {
        for(int j=0;j<arr1[i].size();j++) {
            //기존에 무작정 answer[i][j] = arr1[i][j]+arr2[i][j] 로 하였으나
            //2차원 벡터인 점에서 오류발생
            temp.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(temp);
        temp.clear();
    }

    return answer;
}