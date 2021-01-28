#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int cnt=0;cnt<n;cnt++){
        answer.push_back(x+(cnt*x));
    }
    return answer;
}