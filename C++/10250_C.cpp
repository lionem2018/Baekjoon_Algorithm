/**
 * 2018/08/29
 * 백준 10250 번 문제: ACM 호텔
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int testNum, index = 0;

    scanf("%d", &testNum);

    int output[testNum];

    while(index < testNum)
    {
        int height, width, custNum;
        int xx,yy;

        scanf("%d %d %d", &height, &width, &custNum);

        custNum --;

        xx = custNum%height+1;

        yy = custNum/height+1;

        output[index] = xx * 100 + yy;

        index ++;
    }

    for(int i = 0; i < testNum; i++)
    {
        printf("%d\n", output[i]);
    }

    return 0;
}