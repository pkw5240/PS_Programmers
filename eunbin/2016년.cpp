#include <bits/stdc++.h>

using namespace std;

string solution(int a, int b) {
    int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    string ans[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int day=0;
    for(int i=0;i<a-1;i++){
        day+=month[i];
    }
    day+=b;
    return ans[day%7];
}