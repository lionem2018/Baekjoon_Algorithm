/**
 * 2018/08/14
 * 백준 4673 번 문제: 셀프 넘버
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int dFunc(int);

int main(void)
{
    int i;
    bool numbers[10001] = {0};

    for(i = 1; i <= 10000; i++)
    {
        if(numbers[i] == 0)
            printf("%d\n", i);

        if(dFunc(i) <= 10000)
            numbers[dFunc(i)] = 1;
    }

    return 0;
}

int dFunc(int input)
{
    int result;

    if(input / 10000 > 0)
    {
        result = input + input / 10000 + (input / 1000) % 10 + (input / 100) % 10 + (input / 10) % 10 + input % 10;
    }
    else if(input / 1000 > 0)
    {
        result = input + input / 1000 + (input / 100) % 10 + (input / 10) % 10 + input % 10;
    }
    else if(input / 100 > 0)
    {
        result = input + input / 100 + (input / 10) % 10 + input % 10;
    }
    else if(input / 10 > 0)
    {
        result = input + input / 10 + input % 10;
    }
    else
    {
        result = input + input;
    }

    return result;
}