#include <bits/stdc++.h>
using namespace std;

int INDEX;

bool comp(string a, string b) {
    if(a[INDEX] != b[INDEX]) {
        return a[INDEX] < b[INDEX];
    } else
        return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    INDEX = n;

    sort(strings.begin(), strings.end(), comp);
    answer = strings;

    return answer;
}

int main() {
    solution({"abce","abcd","cdx"},4);

}