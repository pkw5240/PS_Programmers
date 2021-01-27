#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
	string s = to_string(n);
	sort(s.begin(), s.end(), greater<char>());
	return stoll(s);
}