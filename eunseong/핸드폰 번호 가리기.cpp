#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    string str ="";
    
    for(int i=0; i<phone_number.size()-4; i++) str += "*";
    
    answer = phone_number.replace(phone_number.begin(),phone_number.end()-4, str);
    return answer;
}