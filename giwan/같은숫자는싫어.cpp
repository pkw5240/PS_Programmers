#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
	int beforeNum = -1;
	//앞에서부터 쭉 보면서  이전숫자랑 다르면 answer에 푸시 
	for(int i=0;i<arr.size();++i){
		if(beforeNum != arr[i]){
			answer.push_back(arr[i]);
		}
		beforeNum = arr[i];
	}

    return answer;
}