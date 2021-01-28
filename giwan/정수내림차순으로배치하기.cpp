#include <string>
#include <vector>
#include <queue>
using namespace std;

struct CMP{
  bool operator() (const int&a, const int&b) const{
      return a<b;
  }  
    
};

long long solution(long long n) {
    long long answer = 0;
    priority_queue<int, vector<int>, CMP> que;
    while(n>0){
        que.push(n%10);
        n/=10;
    }
    
    while(!que.empty()){
    answer = answer*10 + que.top();
    que.pop();
    }
    return answer;
}