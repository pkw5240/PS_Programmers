#include <vector>
#include <queue>
using namespace std;

int direction[2] = {1,-1};
int M,N;
 
int bfs(int i, int j,const vector<vector<int>> matrix, vector<vector<bool>> &visited){
    queue<pair<int,int>> q;
    int color = matrix[i][j];
    int area = 0;
    visited[i][j] = true;
    q.push(make_pair(i,j));
    
    while(!q.empty()){
        area++;
        int x = q.front().first;
        int y = q.front().second;
        q.pop();  
        for(int k=0;k<2;k++){
            if(x-direction[k]<M && x-direction[k]>=0 && !visited[x-direction[k]][y] && color == matrix[x-direction[k]][y] ){
                q.push(make_pair(x-direction[k],y));
                visited[x-direction[k]][y] = true;
            }
            if(y-direction[k]<N && y-direction[k]>=0 && !visited[x][y-direction[k]] && color == matrix[x][y-direction[k]] ){
                q.push(make_pair(x,y-direction[k]));
                visited[x][y-direction[k]] = true;
            }
        }
    }
    return area;
}
 
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int temp;
    M = m;
    N = n;
    vector<vector<bool>> visited(m,vector<bool>(n,false));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(picture[i][j]!=0 && !visited[i][j]){
                number_of_area++;
                temp = bfs(i,j,picture,visited);
                max_size_of_one_area = max_size_of_one_area < temp ? temp : max_size_of_one_area;
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}