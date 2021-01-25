#include <string>
#include <vector>

using namespace std;

//알파벳n만큼 밀기
char slideWord(const char& alphabet, int n){
    char word = alphabet;
    int dist = 'Z'-'A'+1;
    if(word>='A' && word<='Z'){
        word = (word-'A'+n)%dist + 'A';
    }
    else if(word>='a' && word <='z'){
        word = (word-'a'+n)%dist + 'a';
    }
    return word;
}
string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.length();i++){
        answer += slideWord(s[i],n);
    }
    return answer;
}