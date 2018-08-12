/**
 * 2018/08/12
 * 백준 10817 번 문제: 세 수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

int main(void)
{
    int a, b, c;
    int output;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b)
    {
        if(b > c)
        {
            output = b;
        }
        else
        {

            if(a > c)
            {
                output = c;
            }
            else
            {
                output = a;
            }
        }
    }
    else
    {
        if(a > c)
        {
            output = a;
        }
        else
        {
            if(b > c)
            {
                output = c;
            }
            else
            {
                output = b;
            }
        }
    }

    printf("%d", output);

    return 0;
}