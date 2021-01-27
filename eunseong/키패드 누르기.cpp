#include <string>
#include <vector>
#include <iostream>

using namespace std;

int calDis(pair<int,int> target, pair<int,int> current){
    int disX = abs(target.first-current.first);
    int disY = abs(target.second-current.second);
    return (disX+disY);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    vector<vector<char>> pad = 
    {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};
    
    pair<int,int> Lpos = {3,0};
    pair<int,int> Rpos = {3,2};
    
    for(int i=0; i <numbers.size(); i++){
        for(int j=0; j<4; j++){
            if(numbers[i] == pad[j][0] -'0'){
                answer+= "L";
                Lpos = {j,0};
                break;
            }
            if(numbers[i] == pad[j][2] -'0'){
                answer+= "R";
                Rpos = {j,2};
                break;
            }
            if(numbers[i] == pad[j][1]-'0'){
                int Ldis = calDis({j,1},Lpos);
                int Rdis = calDis({j,1},Rpos);
                
                if(Ldis < Rdis){
                    answer += "L";
                    Lpos = {j,1};
                }
                if(Rdis < Ldis){
                    answer += "R";
                    Rpos = {j,1};
                }
                if(Rdis == Ldis){
                    if(hand == "left"){
                        answer += "L";
                        Lpos = {j,1};
                    }
                    else{
                        answer += "R";
                        Rpos = {j,1};
                    }
                }
                break;
            }
        }
    }
    return answer;
}