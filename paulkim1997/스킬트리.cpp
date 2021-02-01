#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for(int i=0;i<skill_trees.size();i++) {
        //스킬트리 체크할 문자열
        string check;
        //스킬트리의 문자열을 보고, skill 각각의 문자와 같은게 있으면 문자열로 만들어줌
        for(int j=0;j<skill_trees[i].length();j++) {
            for(int k=0;k<skill.length();k++) {
                if(skill_trees[i][j] == skill[k]) {
                    check += skill_trees[i][j];
                    break;
                }
            }
        }
        //만들어준 문자열을 통해 순서가 맞는지 확인
        bool chk = true;
        for(int j=0;j<check.length();j++) {
            if(skill[j] != check[j]) {
                chk = false;
                break;
            }
        }
        if(chk)
            answer++;
    }

    return answer;
}