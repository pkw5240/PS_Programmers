#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = stoi(s);
    /*
    bool plus = false;
    if( s[0] == '+')  {
        plus = true;
        
        string sub = s.substr(1,s.length()-1);
        
        answer = atoi(sub.c_str());
        
    }
    else if ( s[0] == '-'){
        string sub = s.substr(1,s.length());
        
        answer = -1 * atoi(sub.c_str());
        
        
    }
    else{
        string sub = s.substr(0,s.length());
        
        answer = atoi(sub.c_str());
        
    }
    */
    return answer;
}