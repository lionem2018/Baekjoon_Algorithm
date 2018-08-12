/**
 * 2018/08/13
 * 백준 11719 번 문제: 그대로 출력하기2(빈줄포함)
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    char c;
    char outputs[10000] = { 0 };
    int i = 0;
    while(1)
    {
        c = getchar();
        if(c == EOF)
        {
            break;
        }
        outputs[i] = c;
        i++;
    }

    printf("%s", outputs);

    return 0;
}