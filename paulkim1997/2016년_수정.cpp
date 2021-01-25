#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    string answer = "";

    string days[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int totdays=0;

    for(int i=0;i<a-1;i++) {
        totdays += months[i];
    }
    totdays = totdays+b-1;
    answer=days[totdays%7];
    cout << answer;
    return answer;
}

int main() {
    solution(5,24);
}