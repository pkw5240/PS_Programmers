#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    //짝수면 2개필요, 홀수면 가운데 한개 
    if(len%2==0){
        answer += s[len/2-1];
        answer += s[len/2];
    }
    else{
        answer = s[len/2];
    }
        
    return answer;
}