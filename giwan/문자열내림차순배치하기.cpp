#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct CMP{
  bool operator() (const char &a ,const char &b) const{
      return a>b;
  }  
    
};

string solution(string s) {
    string answer = "";
    
    sort(s.begin(),s.end(),CMP());
    return s;
}