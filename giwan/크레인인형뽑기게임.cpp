#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

// 같은인형 처리후 지운갯수 리턴
int sameDoll(stack<int> &bucket) {
	int eraseCnt = 0;

	//버킷 비어있지 않은동안
	while (!bucket.empty()) {
		//하나꺼내서 밑에놈이랑 같으면 꺼내고, 다르면 다시넣고 끝
		int top = bucket.top();
		bucket.pop();

		if (bucket.size() > 0 && bucket.top() == top) {
			bucket.pop();
			eraseCnt += 2;
		}
		else {
			bucket.push(top);
			break;
		}
	}

	return eraseCnt;
}

// 꼭대기 숫자 찾고 없으면 -1리턴
int getTopNum(vector<vector<int>>& board, int& pos) {

	int y = 0;
	//y가 바닥에 도달할때까지 아래로 한칸씩 가면서 값 찾음
	while (y < board.size()) {
		int value = board[y][pos - 1];
		if (value != 0) {
			//찾았으니 원소 제거후 리턴
			board[y][pos - 1] = 0;
			return value;
		}
		++y;
	}
	return -1;
}

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;

	stack<int> bucket; //바구니

	//해당 위치 얻고 
	for (auto &pos : moves) {
		//위치내 꼭대기 원소 찾고

		int top = getTopNum(board, pos);

		//데이터 존재안하면 패스
		if (top < 0) continue;

		//바구니 담고
		bucket.push(top);

		//같은 인형처리
		answer += sameDoll(bucket);
	}


	return answer;
}


int main()
{
	cout << solution({ {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} }, { 1,5,3,5,1,2,1,4 });




}