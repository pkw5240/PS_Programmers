#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    const int size = arr.size();
    if(size == 1) {
        answer.push_back(-1);
        return answer;
    }
    
    int c = 100000000;
	
    for(int i=0; i<size; i++) {
        if(arr[i] < c) {
            c = arr[i];
        }
    }
    
    for(int i=0; i<size; i++) {
        if(arr[i] == c) {
            continue;
        }
        
        answer.push_back(arr[i]);
    }
	
    return answer;
}
