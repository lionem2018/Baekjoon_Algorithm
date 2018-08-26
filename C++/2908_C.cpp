/**
 * 2018/08/26
 * 백준 2908 번 문제: 상수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int input1, input2;
    int change1, change2;

    scanf("%d %d", &input1, &input2);

    change1 = (input1%10 * 100) + ((input1/10)%10 * 10) + input1/100;
    change2 = (input2%10 * 100) + ((input2/10)%10 * 10) + input2/100;

    if(change1 < change2)
        printf("%d", change2);
    else
        printf("%d", change1);

    return 0;
}