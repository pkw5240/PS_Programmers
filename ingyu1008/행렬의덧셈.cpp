#include <vector>

typedef std::vector<int> vi;
typedef std::vector<vi> vvi;

vvi solution(vvi arr1, vvi arr2)
{
    for (int i = 0; i < arr1.size(); i++)
        for (int j = 0; j < arr1[i].size(); j++)
            arr1[i][j] += arr2[i][j];
    return arr1;
}
