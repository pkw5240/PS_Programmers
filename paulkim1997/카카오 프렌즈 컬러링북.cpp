#include <bits/stdc++.h>
using namespace std;

int bfs(int m, int n, int x, int y, vector<vector<int>>& picture, int target);

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    //2차원 벡터 전체 탐색
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            //색칠되있지 않거나, 방문했을때는 스킵
            if(picture[i][j] == 0 || picture[i][j] == -1)
                continue;
            else {
                //영역의 숫자 더해주고 bfs 실행
                number_of_area++;
                int temp = bfs(m,n,i,j,picture,picture[i][j]);
                //최대값 구하기
                max_size_of_one_area = max(temp, max_size_of_one_area);
            }
        }
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

//BFS 로직
int bfs(int m, int n, int x, int y, vector<vector<int>> &picture, int target)
{
    //x,y 좌표가 음수거나, 끝에 도달했거나, 타겟값이 잘못 되었거나
    if( x<0 || y<0 || x == m || y == n || target != picture[x][y])
        return 0;
    //방문했다고 -1로 표시
    picture[x][y]=-1;

    //상하좌우 bfs 실행
    int up = bfs(m,n,x-1,y,picture,target);
    int down = bfs(m,n,x+1,y, picture,target);
    int left = bfs(m,n,x,y-1,picture,target);
    int right = bfs(m,n,x,y+1,picture,target);

    //총합 리턴
    return up + down+ right + left + 1;
}