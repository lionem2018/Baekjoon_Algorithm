/**
 * 2018/09/02
 * 백준 1065 번 문제: 한수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    int cnt = 0;

    scanf("%d", &num);

    if(num < 100)
    {
        cnt += num;
    }
    else
    {
        cnt += 99;

        if(num == 1000)
            num--;

        int iMax, jMax, kMax;

        iMax = num / 100;

        for(int i = 1; i <= iMax; i++)
        {
            if(i == iMax)
                jMax = (num / 10) % 10;
            else
                jMax = 9;
            
            for(int j = 0; j <= jMax; j++)
            {
                if(i == iMax && j == jMax)
                {
                    kMax = num % 10;
                }
                else
                    kMax = 9;

                for(int k = 0; k <= kMax; k++)
                {
                    if((i-j) == (j-k))
                        cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}