#include <string>
#include <vector>

using namespace std;
//값으로 0이면 소수. 1이면 소수x (0번째,1번째 인덱스 소수x표시) - 에라토스
int isPrime[1000001]={1,1};

int solution(int n) {
    int answer = 0;
    
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]) continue;
        
        for(int j=2;j*i<=n;j++){
            isPrime[i*j]=1;
        }
    }
    
    for(int i=2;i<=n;i++){
        if(isPrime[i]==0) answer++;
    }
    return answer;
}