#include <string>
#include <vector>
using namespace std;

int GCD(int a, int b){
    int gcd = 1;
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    gcd =a;
    return gcd;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = GCD(n,m);
    int lcd = gcd * (n/gcd) * (m/gcd);
    answer.push_back(gcd);
    answer.push_back(lcd);
    return answer;
}