#include <vector>
 
using namespace std;
 
int gcd(int a, int b) {
    int gcd = 0;
    int less = a < b ? a : b;
    for (int i = 1; i < less + 1; i++) {
        if (a%i == 0 && b%i == 0) gcd = i;       
    }
    return gcd;
}
 
int lcm(int a, int b) {
    int g = gcd(a, b);
    if (g == 1) return a * b; 
    return a*b/g;
}
 
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));
    return answer;
}
