#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int doll = 0;
    stack<int> result;

    for(int i = 0 ; i < moves.size() ; i++) {
        for(int j = 0 ; j <board.size(); j++) {
            doll = board[j][moves[i]-1];
            if(doll !=0 ) {
                if(result.empty()) {
                    result.push(doll);
                } else {
                    if(result.top() ==doll) {
                        result.pop();
                        answer+=2;
                    } else {
                        result.push(doll);
                    }
                }
                board[j][moves[i]-1]=0;
                break;
            }
        }
    }
    return answer;
}