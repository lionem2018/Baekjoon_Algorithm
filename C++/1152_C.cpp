/**
 * 2018/08/16
 * 백준 1152 번 문제: 단어의 개수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    char c;
    bool isBlank = true;
    int cnt = 0;

    while((c = getchar()) != '\n')
    {
        if(c == ' ')
        {
            isBlank = true;
        }
        else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if(isBlank == true)
            {
                cnt ++;
                isBlank = false;
            }
        }
        else
        {
            isBlank = false;
        }
    }

    printf("%d\n", cnt);

    return 0;
}