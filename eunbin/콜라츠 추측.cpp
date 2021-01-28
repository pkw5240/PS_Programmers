#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n=num;
    int answer = 0;
    while(answer<500){
        if(n == 1) return answer;
        n = (n%2)? (n*3)+1: n/2;
        answer++;
                
    }
    return -1;
}
