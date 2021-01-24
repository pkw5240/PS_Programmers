#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    string list[7]={"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int allday = 0;
    
    for(int i =0; i<a-1; i++){
        allday = allday+days[i];
    }
    
    allday = allday+b-1;
    
    int nam = allday%7;
    answer = list[nam];
    
    return answer;
}