/*
2020/02/25
Baekjoon Online Judge
Problem 10951: A + B - 4
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int A, B, tmp;

    while(true)
    {

        if(scanf("%d %d", &A, &B) == EOF)
            break;
        else
            printf("%d\n", A+B);
        
    }
    return 0;
}