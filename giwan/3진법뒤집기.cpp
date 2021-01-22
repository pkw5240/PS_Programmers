#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
	//3진법숫자 저장용 
    int code[33]={0};
	int code_i=0;
	//3진법데이터 저장 
	while(n>=3){
		code[code_i++] = n%3;
		n/=3;	
	}
	code[code_i] = n;
	
	//0번쨰부터 ->  code_i번째로 접근하는거 자체가  뒤집힌 3진법 바라보는거니
	//앞으로 나아가면서  0아닌 숫자 뜨는 위치 찾음 
	int ignoreZero=0;
	for(int i=0;i<=code_i;++i){
		if(ignoreZero == 0 && code[i]!=0){
			ignoreZero = i;
			break;
		}
	}
	
	// 0이 아닌 숫자 위치~ code_i  3진법->10진법 계산 
	for(int i=code_i,j=0;i>=ignoreZero;i--,j++){
		answer += (code[i]*pow(3,j));
	}
	 
	

    return answer;
}