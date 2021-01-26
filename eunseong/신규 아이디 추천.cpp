#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string rule_1(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <='Z'){
            s[i] = s[i] +('a' -'A');
        }
    }
    return s;   
}

string rule_2(string s){
    string temp ="";
    for(int i=0; i<s.size(); i++){
        if(s[i] >='a' && s[i]<='z') temp +=s[i];
        else if(s[i] >='0' && s[i]<='9') temp += s[i];
        else if(s[i] =='-' || s[i] =='_' || s[i] == '.') temp+=s[i];
    }
    
    return temp;
}

string rule_3(string s){
    string temp="";
    vector<char> V;
    V.push_back(s[0]);
    for(int i=1; i<s.size(); i++){
        if(V.back() == '.' && s[i] == '.') ;
        else V.push_back(s[i]);
    }
    for(int i=0; i<V.size(); i++) temp += V[i];
    return temp;
}

string rule_4(string s){
    
    if(s[0] =='.') s.erase(s.begin());
    if(s[s.size()-1] == '.') s.erase(s.end()-1);
    
    return s;
}

string rule_5(string s){
    if(s.size() ==0) s +='a';
    return s;
}

string rule_6(string s){
    
    if(s.size() > 15) s.erase(s.begin() +15, s.end());
    if(s[s.size()-1] == '.') s.erase(s.end()-1);
    
    return s;
}

string rule_7(string s){
    
    while(s.size() <3){
        s += s[s.size()-1];
    }
    return s;
}

string solution(string new_id) {
    string answer = "";
    
    answer = rule_1(new_id);
    answer = rule_2(answer);
    answer = rule_3(answer);
    answer = rule_4(answer);
    answer = rule_5(answer);
    answer = rule_6(answer);
    answer = rule_7(answer);
    
    return answer;
    //노가다말고는 방법이 생각이 안나네요..ㅋㅋ
}