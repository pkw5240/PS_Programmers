#include <string>
#include <vector>

using namespace std;

bool isNumber(const string& s){
    for(auto &iter : s){
        //숫자 아닌거 등장시 바로 false리턴
        if(!(iter >= '0' && iter<='9')) return false;
    }
    return true;
}

bool solution(string s) {
   
    if(s.length() == 4 && isNumber(s)) return true;
    return false;
}