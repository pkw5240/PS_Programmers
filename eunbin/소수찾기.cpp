#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    /*
    for(int i=2;i <= n;i++){
        for(int j=2; j< i; j++){
            if(i % j == 0) break;
            if(j == i-1 ) answer++;
            
        }
        
        
    }
    */
    vector<int> arr(n+1);
    
    for(int i=1; i<n+1; i++){
        arr[i]=i;
        
    }
    
    for(int j=2; j<n+1; j++ ){
        if(arr[j] == 0) continue;
        for(int k = 2*j; k<n+1; k += j)
        {
            //여기를 잘 모르겠어영
            arr[k] = 0;
        }
    }
    
    for(int k=2;k<n+1;k++){
        
        if( arr[k] != 0) answer++;
        
    }
    return answer;
}