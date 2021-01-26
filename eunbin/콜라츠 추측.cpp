#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = (long)num;
    while(answer < 500){
        if( n ==1 ) break;
        
        if(n % 2 == 0) n /= 2;
        else  n = n*3 + 1;  
        
        answer++;
        
    }
    if(answer == 500) return -1;
    else return answer;
}