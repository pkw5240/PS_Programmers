#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

struct Func {
	bool operator () (const int& a, const int& b) const {
		return a < b;
	}
};

vector<int> solution(vector<int> numbers) {
	vector<int> answer;

	//set에  각 합들 담고  (중복 방지 +  루트기준 좌측 작게, 우측 크게 배치)
	set<int, Func> datas;
	for (int i = 0; i < numbers.size(); ++i) {
		for (int j = i + 1; j < numbers.size(); ++j) {
			datas.insert(numbers[i] + numbers[j]);
		}
	}
	
	//set에 담긴거  answer에 담아 출력
	for (auto& i : datas) {
		answer.push_back(i);
	}
	return answer;
}

int main()
{
	solution({ 2,1,3,4,1 });
	solution({ 5,0,2,7 });

}