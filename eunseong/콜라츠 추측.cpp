#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    long long num = n;
    
    while(num != 1 && answer < 500){
        if(num%2 == 0) num /= 2;
        else num = num*3 +1;
        answer++;
    }
    
    if(num != 1) answer = -1;

    return answer;
}