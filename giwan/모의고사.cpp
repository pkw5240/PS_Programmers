#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> solution(vector<int> answers) {
	vector<int> answer;

	int score[3] = { 0 };

	vector<int> man[3] = { {1,2,3,4,5},{2,1,2,3,2,4,2,5},{3,3,1,1,2,2,4,4,5,5} };

	int i = 0;

	//정답지랑 비교하며 점수 센다음 
	for (auto ans = answers.begin(); ans != answers.end(); ans++, ++i)
	{
		if (man[0][i % 5] == (*ans))  score[0]++;
		if (man[1][i % 8] == (*ans)) score[1]++;
		if (man[2][i % 10] == (*ans)) score[2]++;
	}

	//정렬 하기 위해 점수넣고  
	vector<int> temp = { score[0], score[1], score[2] };
	sort(temp.begin(), temp.end());

	int max = *(temp.end() - 1);
	//가장높은점수 동점자 뽑아서 answer에 담기
	for (int i = 0; i < 3; ++i)
	{
		if (max == score[i])
			answer.push_back(i + 1);
	}
	return answer;
}