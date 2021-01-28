#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    //처음에 정렬하고 제일 앞에 것 지우려했으나 생각해보니 말이 안되는 로직
    int min = 999999;
    int minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }
    //제일 작은 값의 위치를 저장해놓고 제거
    arr.erase(arr.begin() + minIndex);

    answer = arr;
    //비어있으면 -1 리턴
    if (arr.empty())
        answer.push_back(-1);
    return answer;
}