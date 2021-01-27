#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int leftPos=-1;
    int rightPos=-1;
    for(int i=0; i<numbers.size();i++){
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7) {
            answer+="L";
            leftPos=numbers[i];
        }
        else if(numbers[i]==3 || numbers[i]==6 || numbers[i]==9) {
            answer+="R";
            rightPos=numbers[i];
        }
        else {
            if(abs(numbers[i]-leftPos > numbers[i]-rightPos)) {
                answer+="R";
                rightPos=numbers[i];
            } else if(abs(numbers[i]-leftPos < numbers[i]-rightPos)) {
                answer+="L";
                leftPos=numbers[i];
            } else {
                if(hand=="right") {
                    answer+="R";
                    rightPos=numbers[i];
                } else {
                    answer+="L";
                    leftPos=numbers[i];
                }
            }
        }
    }
    return answer;
}

int main(){
    solution({1,3,4,5,8,2,1,4,5,9,5},"right");
}