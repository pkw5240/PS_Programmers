#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    //아래 -> 오른쪽 -> 위(반복)
    int map[n][n];
    int k = 1;
    int row = -1;
    int col =0;
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i%3 == 0) row++;
            else if(i%3 == 1) col++;
            else if (i%3 == 2){row--; col--;}
            
            map[row][col] = k;
            k++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            answer.push_back(map[i][j]);
        }
    }
    
    return answer;
}