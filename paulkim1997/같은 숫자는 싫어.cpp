#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    //이전과 같은 숫자인지 비교하기 위해 now, before 선언
    int now=0;
    int before=0;
    for(int i=0;i<arr.size();i++) {
        now = arr[i]; //now에 현재값
        if(i>0) { //index가 1부터일때만 before존재
            before = arr[i-1]; //before에 이전값
            if(before!=now) {
                answer.push_back(before); //값이 달라지면 이전 값 저장
            }
        }
    }
    //마지막 까지 왔으면 계속 같은 숫자였거나, 다른 숫자 한개가 있을수 있으니 저장
    answer.push_back(arr[arr.size()-1]);

    return answer;
}
