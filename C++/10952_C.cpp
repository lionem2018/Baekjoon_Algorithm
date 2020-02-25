/*
2020/02/25
Baekjoon Online Judge
Problem 10952: A + B - 5
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int A = -1, B = -1;

    while(true)
    {
        scanf("%d %d", &A, &B);

        if (A != 0 || B != 0)
            printf("%d\n", A+B);
        else
            break;
        
    }
    return 0;
}