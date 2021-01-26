#include <bits/stdc++.h>

using namespace std;
 
string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int ly=3,lx=1;
    int ry=3,rx=3;
    for(int i=0;i<numbers.size();i++){
        
		int pad_num=numbers[i];
        if(pad_num==0){pad_num=11;}
        
        int mook=pad_num/3;
        int res=pad_num%3;
        
        if(res==0){
            mook-=1;res+=3;
        }
        if(res==1){
            answer+="L";
            ly=mook;lx=res;
            continue;
        }
        else if(res==3){
            answer+="R";
            ry=mook;rx=res;
        }
        else if(res==2){
            int ld=abs(ly-mook)+abs(lx-res);
            int rd=abs(ry-mook)+abs(rx-res);
            if(ld<rd){
                answer+="L";
                ly=mook;
				lx=res;
            }
            else if(ld>rd){
                answer+="R";
                ry=mook;
				rx=res;
            }
            else if(ld==rd){
                if(hand.compare("right")==0){
                    answer+="R";
                    ry=mook;
					rx=res;
                }
                else{
                    answer+="L";
                    ly=mook;
					lx=res;
                }
            }
            
        }
        
    }
    return answer;
}