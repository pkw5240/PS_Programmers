#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct Comp{
 
 int index;
 bool operator ()  (const string& a, const string& b) const{
     //인덱스 위치 해당되는 문자 같으면  오름차순 
     if(a[index] == b[index]){
         return a<b;
     }
     //인덱스위치 문자기준 오름차순
     return a[index] < b[index];
 }
    
};

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    //정렬키로 n값 넘겨서  sort
    Comp t;
    t.index = n;
    
    sort(strings.begin(),strings.end(), t);
    
    answer = strings;
    return answer;
}