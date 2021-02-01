#include <bits/stdc++.h>=
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int total = 0;

    sort(d.begin(), d.end());
    for(int i=0;i<d.size();i++) {
        total += d[i];
        if(total>budget) {
            break;
        }
        answer++;
    }
    return answer;
}

int main() {
    solution({1,3,2,5,4},9);
}