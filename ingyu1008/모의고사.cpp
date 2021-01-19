#include <vector>

std::vector<int> solution(std::vector<int> answers) {
    std::vector<int> answer;
    
    int score[3] = {0,0,0};
    std::vector<int> chosen[3];
    chosen[0].push_back(1);
    chosen[0].push_back(2);
    chosen[0].push_back(3);
    chosen[0].push_back(4);
    chosen[0].push_back(5);
    
    chosen[1].push_back(2);
    chosen[1].push_back(1);
    chosen[1].push_back(2);
    chosen[1].push_back(3);
    chosen[1].push_back(2);
    chosen[1].push_back(4);
    chosen[1].push_back(2);
    chosen[1].push_back(5);
    
    chosen[2].push_back(3);
    chosen[2].push_back(3);
    chosen[2].push_back(1);
    chosen[2].push_back(1);
    chosen[2].push_back(2);
    chosen[2].push_back(2);
    chosen[2].push_back(4);
    chosen[2].push_back(4);
    chosen[2].push_back(5);
    chosen[2].push_back(5);
    //전처리
    
    for(int i = 0; i < answers.size();i++) for(int j = 0; j < 3; j++) if(answers[i] == chosen[j][i%chosen[j].size()]) score[j]++;
    int max = std::max(score[0], std::max(score[1],score[2]));
    for(int i = 0; i < 3; i++) if(max == score[i]) answer.push_back(i+1);
    
    return answer;
}