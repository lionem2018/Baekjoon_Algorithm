/*
2020/03/04
Baekjoon Online Judge
Problem 1978: 소수 찾기
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num, cnt = 0;
    int input[101] = {0};
    bool checkNotSosuList[1001] = {false};

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &input[i]);
    }

    checkNotSosuList[0] = checkNotSosuList[1] = 1;

    for(int i = 2; i <= 1000; i++)
    {
        for(int j = i+1; j <= 1000; j++)
        {
            if(j % i == 0)
            {
                checkNotSosuList[j] = 1;
            } 
            else if(checkNotSosuList[j] == 1)
                continue;
        }
    }

    for(int i = 0; i < num; i++)
    {
        if(checkNotSosuList[input[i]] == 0)
        {
            cnt ++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}