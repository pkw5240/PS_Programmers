#include <bits/stdc++.h>

using namespace std;

int mx,a[3];
vector<int> v;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int s1[5]={1,2,3,4,5};
    int s2[8]={2,1,2,3,2,4,2,5};
    int s3[10]={3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0;i<answers.size();i++){
        if(s1[i%5]==answers[i]) a[0]++;
        if(s2[i%8]==answers[i]) a[1]++;
        if(s3[i%10]==answers[i]) a[2]++;
    }
   
    for(int i=0;i<3;i++){
        if(mx<a[i]) mx=a[i];
    }
    for(int i=0;i<3;i++){
        if(mx==a[i]) answer.push_back(i+1);
    }
    return answer;
}
