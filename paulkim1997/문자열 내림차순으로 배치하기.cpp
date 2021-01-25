#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    string answer = "";
    vector<string> result;
    for(int i=0; i<s.length(); i++) {
        string c = s.substr(i,1);
        result.push_back(c);
    }

    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    for(int i=0;i<result.size();i++) {
        answer.append(result[i]);
    }
    return answer;
}

int main(){
    solution("qPoooyY");
}