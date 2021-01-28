#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            answer+=i;
            answer+=(n/i);
        }
    }
    if(i*i==n) answer+=i;
    return answer;
}