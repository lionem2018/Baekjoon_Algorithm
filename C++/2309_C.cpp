/*
2020/04/06
Baekjoon Online Judge
Problem 2309: 일곱 난쟁이
열 명의 난쟁이의 키가 주어졌을 때, 총 합이 100이 되는 일곱 명의 키를 오름차순으로 출력하기  
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int sum_height = 0, heights[9];
    bool is_found = false;
    int i, j;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &heights[i]);
        sum_height += heights[i];
    }

    for(i = 0; i < 8; i++)
    {
        for(j = i + 1; j < 9; j++)
        {
            if(sum_height - heights[i] - heights[j] == 100)
            {
                is_found = true;
                heights[i] = 100;
                heights[j] = 100;
            }
        }

        if(is_found)
            break;
    }

    sort(heights, heights + 9);

    for(i = 0; i < 7; i++)
        printf("%d\n", heights[i]);

    return 0;
}