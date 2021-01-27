#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size() == 1) answer.push_back(-1);
    
    int temp = arr[0];
    int index =0;
    for(int i=1; i<arr.size(); i++){
        if(temp > arr[i]){
            temp = arr[i];
            index = i;
        }
    }
    
    for(int i = 0; i<arr.size(); i++){
        if(i != index) answer.push_back(arr[i]);
    }
    return answer;
}