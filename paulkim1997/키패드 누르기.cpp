#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    //왼손위치, 오른손위치 정의
    int leftPos=10;
    int rightPos=12;

    //현재 누를 번호와 왼손, 오른손 사이의 거리 변수
    int leftDist=0;
    int rightDist=0;

    for(int i=0; i<numbers.size();i++){
        //1,4,7을 눌러야 하면 무조건 왼손
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7) {
            answer+="L";
            leftPos=numbers[i];
        }//3,6,9을 눌러야 하면 무조건 오른손
        else if(numbers[i]==3 || numbers[i]==6 || numbers[i]==9) {
            answer+="R";
            rightPos=numbers[i];
        }
        else {//2,5,8,0 일때
            //0일때 값을 11로
            if(numbers[i]==0)
                numbers[i]=11;

            int left_temp = abs(numbers[i]-leftPos);
            int right_temp = abs(numbers[i]-rightPos);

            //상하는 3씩, 좌우는 1씩이니까 거리 구해줄때 계산 필요
            //ex) 5를 눌러야 할때 왼손이 1에 있다고 가정하자
            //5-1의 절대값은 4이지만, 실제 거리 값은 2
            //상,하로 움직이면 3씩 늘어나니 3으로 나눠줘서 상하로 몇번 움직이는지 + 3으로 나눈 나머지로 좌우로 몇번 움직이는지
            leftDist = (left_temp/3) + (left_temp%3);
            rightDist = (right_temp/3) + (right_temp%3);

            //왼손이 거리가 더 짧을때
            if(leftDist < rightDist) {
                answer+="L";
                leftPos=numbers[i];
            } //오른손이 거리가 더 짧을때
            else if(leftDist > rightDist){
                answer+="R";
                rightPos=numbers[i];
            } //거리가 같을 때
            else {
                //오른손 잡이면
                if(hand == "right") {
                    answer += "R";
                    rightPos = numbers[i];
                }//왼손 잡이면
                else {
                    answer += "L";
                    leftPos = numbers[i];
                }
            }
        }
    }
    return answer;
}

int main(){
    solution({1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5},"right");
}