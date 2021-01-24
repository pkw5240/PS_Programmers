#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

string solution(string s) {
    string answer = "";
    
    sort(s.begin(), s.end(),desc);
    return s;
}