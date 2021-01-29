#include <bits/stdc++.h>
using namespace std;


double solution(vector<int> arr) {
    double answer = 0;
    //처음에 int형 total변수를 선언해주고
    //총합을 total 변수에 넣고 나누니 계속int형 나와서 당황
    //고치고 멘붕
    for(int i=0;i<arr.size();i++) {
        answer+=arr[i];
    }
    answer /= arr.size();
    return answer;
}

int main(){
    solution({1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5});
}