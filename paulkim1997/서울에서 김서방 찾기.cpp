#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int index=0;
    for(int i=0;i<seoul.size();i++) {
        if(seoul[i] == "Kim") {
            index=i;
            break;
        }
    }
    answer = "김서방은 "+ to_string(index) +"에 있다";
    return answer;
}

int main() {
    solution({"Jane","Kim"});
}