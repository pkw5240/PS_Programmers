#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    //30명의 체육복에 대해 현 상태 표시
    int students[31]= {0};
    
    for(auto& iter : lost){
        --students[iter];
    }
    for(auto& iter : reserve){
        ++students[iter];
    }

    //그리디로 진행
    //당장 남으면 다음사람에게 주고,
    //당장 부족하면 다음사람꺼 가져옴
    for(int i=1;i<n;++i){
		if(students[i]>0){
			if(students[i+1]<0){
				students[i]--;
				students[i+1]++;	
			}
		}
        else if(students[i]<0){
            if(students[i+1]>0){
                students[i]++;
                students[i+1]--;
            }
        }
    }

	for(int i=1;i<=n;++i){
		if(students[i] >= 0) answer++;
	}
    return answer;
}