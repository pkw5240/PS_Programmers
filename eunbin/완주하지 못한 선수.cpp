#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(),participant.end());    
    sort(completion.begin(),completion.end());
 
    for(int i=0;i<participant.size();i++){
		//완주자의 이름과 참가자의 이름이 다를 때 
		//참가자의 이름이 미완주자이므로 더 보지 않고 break
        if(participant[i]!=completion[i]) {
            answer=participant[i];
            break;
        }
    }
    return answer;
}