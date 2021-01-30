#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = *min_element(arr.begin(),arr.end());
    for(int a:arr){
        if(a != min) answer.push_back(a);
    }
    if(answer.size() == 0) answer.push_back(-1);
    return answer;
}
