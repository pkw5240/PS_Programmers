#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(auto iter : arr){
        answer+=iter;
    }
    answer/=arr.size();
    return answer;
}