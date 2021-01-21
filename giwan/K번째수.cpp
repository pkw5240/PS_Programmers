#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto comm = commands.begin(); comm != commands.end(); ++comm)
    {
        vector<int> temp;
        for(int iStart = (*comm)[0]-1; iStart<=(*comm)[1]-1; ++iStart)
        {
            temp.push_back(array[iStart]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[(*comm)[2]-1]);
    }
    return answer;
}