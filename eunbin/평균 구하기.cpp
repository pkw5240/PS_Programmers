#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum=0;
    for(int a:arr) sum+=a;
    
    return (double)sum/arr.size();
}