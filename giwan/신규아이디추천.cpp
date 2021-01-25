#include <string>
#include <vector>

using namespace std;

string step1(const string &a){
    string data ="";
    for(int i=0;i<a.length();i++){
        if(a[i] >='A' && a[i]<='Z'){
            data += (a[i] +('a'-'A'));
        }
        else {
            data += a[i];
        }
    }
    return data;
}

string step2(const string &a){
    string data="";
    string words = "~!@#$%^&*()=+[{]}:?,<>/";
    for(int i=0;i<a.length();i++){
        char word=a[i];
        for(int j=0;j<words.length();j++){
            if(word == words[j]){
                word=' ';
                break;
            }
        }
        if(word != ' '){
            data += word;
        }
    }
    return data;
}
string step3(const string &a){
    string data="";
    for(int i=0;i<a.length();i++){
        char word = a[i];
        if(word == '.'){
            while(i+1<a.length() && a[i+1]=='.'){
                i++;
            }
        }
        data += word;
    }
    return data;
}
string step4(const string& a){
    string data="";
    int startPos = 0;
    if(a[0] == '.'){
        startPos++;
    }
    data = a.substr(startPos);
    
    if(data[data.length()-1]=='.')
        data = data.substr(0, data.length()-1);
    
    return data;
}
string step5(const string &a){
    string data=a;
    if(a.length() == 0){
        data = "a";
    }
    return data;
}

string step6(const string &a){
    string data = a;
    if(data.length()>15){
        data = data.substr(0,15);
        if(data[data.length()-1]=='.') {
            data = data.substr(0,data.length()-1);
        }
    }

    
    return data;    
}

string step7(const string& a){
    string data = a;
    while(data.length()<3){
          data += data[data.length()-1];  
    }
    return data;
}

string solution(string new_id) {
    string answer = new_id;
    
    //미친 개노가다... 정규표현식이나 뭔가 더 나은 방법들이 많겠지만
    //문자열을 잘 안다룬 저는 노가다밖에 떠오르는게 없었습니다 ㅠㅠ 
    answer = step1(answer);
    answer = step2(answer);
    answer = step3(answer);
    answer = step4(answer);
    answer = step5(answer);
    answer = step6(answer);
    answer = step7(answer);
    
    
    return answer;
}