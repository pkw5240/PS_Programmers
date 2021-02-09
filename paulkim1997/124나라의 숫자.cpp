#include <bits/stdc++.h>
using namespace std;

//처음에 3진법 생각했는데 아닌듯
//0,1,2 로 이루어진 3진법이 아니라 1,2,4로 이루어짐

string solution(int n) {
    string answer = "";

    int a = n;
    int remainder = -1;

    while(a!=0) {
        remainder = a % 3;
        a = a / 3;
        if(remainder==0) {
            answer = "4" + answer;
            a--;
        } else if(remainder == 1) {
            answer = "1" + answer;
        } else if(remainder == 2) {
            answer = "2" + answer;
        }
    }

    return answer;
}

int main() {
    solution(3);
}