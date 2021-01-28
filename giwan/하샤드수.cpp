#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int s=0;
    int t=x;
    while(t>0){
        s+=(t%10);
        t/=10;
    }
    if(x%s!=0) answer =false;
    return answer;
}