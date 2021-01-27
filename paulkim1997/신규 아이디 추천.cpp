#include <bits/stdc++.h>
using namespace std;

string solution(string new_id) {
    string answer = "";

    //공백제거
    new_id.erase(remove(new_id.begin(), new_id.end(), ' '), new_id.end());

    //소문자로
    for(int i=0;i<new_id.length();i++) {
        new_id[i] = tolower(new_id[i]);
    }

    //알파벳 소문자, '-','_','.' 제외하고 제거
    for(int i=0;i<new_id.length();i++) {
        if(!isalpha(new_id[i]) && !isdigit(new_id[i])) {
            if(new_id[i] != '-' &&  new_id[i] != '_' && new_id[i] != '.' ) {
                new_id[i] = NULL;
            } else {
                continue;
            }
        }
    }
    new_id.erase(remove(new_id.begin(), new_id.end(), NULL), new_id.end());

    //'.'가 연속되면 하나빼고 제거
    char c = '.';
    for(int i=0;i<new_id.length();i++) {
        new_id.erase(unique(new_id.begin(),new_id.end(),[=](const auto &c1, const auto &c2) {return c1 == c && c2 ==c;}),new_id.end());
    }

    //앞뒤로 .가 위치하면 제거
    if(new_id[0] == '.')
        new_id[0] = NULL;
    if(new_id[new_id.length()-1] == '.')
        new_id[new_id.length()-1] = NULL;
    new_id.erase(remove(new_id.begin(), new_id.end(), NULL), new_id.end());

    //문자열 비어있다면 a대입
    if(new_id.empty()) {
        new_id = "a";
    }

    //문자열 크기가 15이상이면 자르기, . 로 끝난다면 제거
    if(new_id.length()>15) {
        new_id = new_id.substr(0,15);
    }
    if(new_id[new_id.length()-1] == '.')
        new_id[new_id.length()-1] = NULL;
    new_id.erase(remove(new_id.begin(), new_id.end(), NULL), new_id.end());

    //문자열 길이가 2 이하면 3이 될때까지 마지막 문자 반복
    if(new_id.length()<3) {
        do{
            new_id.append(&new_id[new_id.length()-1]);
        } while(new_id.length()<3);
    }

    answer=new_id;
    return answer;
}