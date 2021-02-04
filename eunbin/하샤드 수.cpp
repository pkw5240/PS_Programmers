#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int t=x,sum=0;
    while(t!=0){
        sum+=t%10;
        t/=10;
    }
    return !(x%sum);
}