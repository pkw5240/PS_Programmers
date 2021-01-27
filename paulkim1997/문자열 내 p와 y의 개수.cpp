#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt=0;
    int yCnt=0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    for(int i=0;i<s.length();i++) {
        string r = s.substr(i,1);
        if(r == "p" || r=="P") pCnt++;
        if(r == "y" || r=="Y") yCnt++;
    }

    if(pCnt==yCnt)
        answer = true;
    else
        answer = false;

    return answer;
}

int main(){
    solution("qPoooyY");
}