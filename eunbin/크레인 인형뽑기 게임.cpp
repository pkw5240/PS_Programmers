#include <bits/stdc++.h>

using namespace std;

stack<int> stk;
int rt;

int solution(vector<vector<int>> board, vector<int> moves) {
	for (int i = 0; i < moves.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			int x = moves[i] - 1;
			int temp = board[j][x];
			if (temp == 0)continue;
			else {
				if (!stk.empty() && stk.top() == temp) {
					rt += 2;
					stk.pop();
				}
				else stk.push(temp);

				board[j][x] = 0;
				break;
			}
		}
	}
	return rt;
}