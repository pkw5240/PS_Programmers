#include <string>
#include <vector>
#include <cmath>
using namespace std;

//1. 제곱근 구함 2. 자연수 인지 확인 3. 맞으면 제곱 아니면 -1

    long long solution(long long n) {
    long long answer = 0;
    
    long long cand = sqrt(n);
    if(cand * cand == n) {
        answer = (cand+1)  * (cand+1);
    } else {
        answer = -1;
    }
    
    return answer;


}