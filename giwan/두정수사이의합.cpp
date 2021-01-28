#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int min,max;
    if(a<b){ min = a; max = b;  }
    else{ min = b; max = a; }
 
    //양쪽에서 가운데로 오면서 더하기
    while(min<max){
        answer = answer + min++;
        answer = answer + max--;
    }
    if(min==max) answer += min;
    
    return answer;
}