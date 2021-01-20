#include <bits/stdc++.h>

using namespace std;
vector<int>::iterator it;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0;i<numbers.size()-1;i++){
        for(int j=i+1;j<numbers.size();j++){
            int temp=numbers[i]+numbers[j];
            it = find(answer.begin(),answer.end(),temp);
            //중복된 값이 없으면 저장
            if(it == answer.end()) answer.push_back(temp);
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}
