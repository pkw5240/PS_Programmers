#include <string>
#include <vector>

using namespace std;

int gcd(int x,int y){
    int result=0;
    int less = (x<y)? x:y;
    for(int i=1;i<=less;i++){
        if( x%i == 0 && y%i == 0) result=i;
    }
    return result;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(n*m/gcd(n,m));
    return answer;
}
