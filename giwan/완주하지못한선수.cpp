
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	vector<string> answerlist;

	//정렬후
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	int rIndex = 0, lIndex = 0;

	//비교해나가다 같지않은 사람 발견시 위치저장후 리턴
	while (1)
	{
		if ((lIndex < completion.size()) && participant.at(rIndex) == completion.at(lIndex))
		{
		}
		else {
			answerlist.push_back(participant.at(rIndex));
			break;
		}

		rIndex++;
		lIndex++;
	}
	if (answerlist.size() > 0)
		answer = *(answerlist.begin());
	else
		answer = "";
	return answer;
}
