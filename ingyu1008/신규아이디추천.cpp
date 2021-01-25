#include <string>
#include <algorithm>
#include <vector>

std::string solution(std::string new_id)
{
    std::vector<char> answer(new_id.size());

    for (int i = 0; i < answer.size(); i++) //1단계
    {
        answer[i] = new_id[i] + 32 * (new_id[i] >= 'A' && new_id[i] <= 'Z'); //대문자면 +32, 아니면 그대로
    }

    { //2단계
        int myptr = 0;
        for (int i = 0; i < answer.size(); i++)
        {
            if ((answer[i] >= 'a' && answer[i] <= 'z') || (answer[i] >= '0' && answer[i] <= '9') || (answer[i] == '-' || answer[i] == '_' || answer[i] == '.'))
            {
                answer[myptr++] = answer[i]; // 조건 만족하지 않으면 추가 안함
            }
        }
        answer.resize(myptr);
    }

    { //3단계
        int myptr = 1;
        for (int i = 1; i < answer.size(); i++)
        {
            if (answer[i] != '.' || answer[i - 1] != '.')
                answer[myptr++] = answer[i]; // 자신과 그 전 묹자가 모두 .인 경우 스킵
        }
        answer.resize(myptr);
    }

    { // 4,5단계
        int i = 0, myptr = 0;
        while (answer[i] == '.')
            i++; //문자열 맨 앞 . 스킵

        for (; i < answer.size(); i++)
        {
            answer[myptr++] = answer[i]; 
        }

        myptr--;
        while (myptr >= 0 && answer[myptr] == '.') //맨 뒤 . 스킵
            myptr--;
        myptr++;

        if (myptr == 0)
            answer[myptr++] = 'a'; //모든 문자 지워진 경우 a 로 대체
        answer.resize(myptr);
    }

    { // 6단계
        int sz = answer.size();
        answer.resize(std::min(15, sz)); //15개로 제한
        int myptr = answer.size() - 1;
        while (myptr >= 0 && answer[myptr] == '.') //맨 뒤 . 제거
            myptr--;
        myptr++;

        answer.resize(myptr);
    }

    while (answer.size() < 3) // 7단계
    {
        answer.push_back(answer[answer.size() - 1]);
    }

    return std::string(answer.begin(), answer.end());
}