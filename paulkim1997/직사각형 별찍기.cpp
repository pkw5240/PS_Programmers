#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    for(int i=0;i<b;i++) {
        for(int j=0;j<a;j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//좀 더 좋은 풀이
//시간복잡도가 조금 주는듯?
int main(void) {
    int a;
    int b;
    cin >> a >> b;

    string s="";
    s.append(a,'*');
    for(int i =0;i<b;i++) {
        cout << s << endl;
    }
    return 0;
}