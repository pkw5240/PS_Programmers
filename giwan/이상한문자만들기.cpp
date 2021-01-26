#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int step=0;//최초 짝수 그다음 공백시 홀수
    for(int i=0;i<s.length();++i){
        if(s[i]==' '){
            step=0;
            answer+=s[i];
            continue;
        }
        if(step % 2 == 0) {
            if(s[i]>='a'&&s[i]<='z') answer += (s[i]-('a'-'A'));
            else answer+=s[i];  
            step++;
        }
        else{
            if(s[i]>='A'&&s[i]<='Z') answer += (s[i]+('a'-'A'));
            else answer+=s[i];
            step++;
        }
    }
    return answer;
}