/**
 * 2018/08/29
 * 백준 2775 번 문제: 부녀회장이 될테야
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int myFunc(int h, int w);

int main(void)
{
    int testNum, index = 0;

    scanf("%d", &testNum);

    int output[testNum];

    while(index < testNum)
    {
        int k, n;

        scanf("%d", &k);
        scanf("%d", &n);

        output[index] = myFunc(k, n);

        index ++;
    }

    for(int i = 0; i < testNum; i++)
    {
        printf("%d\n", output[i]);
    }

    return 0;
}

int myFunc(int k, int n)
{
    int result = 0;

    if(k == 0)
        result = n;
    else
    {
        for(int i = 1; i <= n; i++)
        {
            result += myFunc(k-1, i);
        }
    }

    return result;
}