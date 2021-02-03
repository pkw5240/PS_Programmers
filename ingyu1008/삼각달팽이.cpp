#include <string>
#include <vector>

int arr[1000][1000];

std::vector<int> solution(int n)
{
    int dir[3][2] = {{1, 0}, {0, 1}, {-1, -1}};

    int posr = -1;
    int posc = 0;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            posr += dir[i % 3][0];
            posc += dir[i % 3][1];

            arr[posr][posc] = k++;
        }
    }
    std::vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            answer.push_back(arr[i][j]);
        }
    }
    return answer;
}