#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> day = {0,31,29,31,30,31,30,31,31,30,31,30,31};
   
    //월0 화1 수2 목3 금4 토5 일6
    int nowDay=0;
    int dayofweek = 4;
    string dayofweek_str[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    
    //a월b일까지의 날짜 계산
    //1.1~ a월전까지 날짜계산
    for(int i=1;i<a;i++){
        nowDay += day[i];
    }
    //a월1일부터 b일까지 날짜 계싼
    nowDay+=b;
    
    //nowDay 0을 금요일 이라 정했으니   계산된 nowDay가  1 기준 금요일이 될 수 있게 처리 
    
    dayofweek = (dayofweek+nowDay-1)%7;
    
    return dayofweek_str[dayofweek];
    
}