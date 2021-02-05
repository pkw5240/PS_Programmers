#include <bits/stdc++.h>
using namespace std;

int calculateGcd(int w, int h) {
    int temp;
    
    while (h != 0) {
        temp = w % h;
        w = h;
        h = temp;
    }
    
    return w;
}

long long solution(int w,int h) {
    
    /**
    double w = (double) a;
    double h = (double) b;
    
    long long answer = w*h;
    double angle = (double)h/w; //기울기
    long square = 0; //사각형 개수
    double before=0, cur;
    bool check = true; //정수인지 체크
    
    for(int i=1; i<=w; i++){
        cur = angle*i;
        
        //정수판별 법
        if(cur - (int)cur != 0){
            cur = (int)cur+ 1; //올림
            check = false;
        }
        
        else check = true;
        square += (cur-before);
        
        if(check == false) before = cur -1; //버림
        else before = cur;
    }
    
    cout << square;
    
    return answer-square;**/
    
    long long answer = 0;
    int gcd = 0;
    long long trash = 0;
    
    gcd = calculateGcd(w, h);
    trash = w + h - gcd;
    answer = ((long long)w * (long long)h) - trash;
    
    return answer;
}