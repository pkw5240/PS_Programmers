#include <string>
#include <vector>

using namespace std;

string datas[2] = {"수","박"};

string solution(int n) {
    string answer = "";
    
    for(int i=0;i<n;i++){
        answer += datas[i%2];
    }
    
    return answer;
}