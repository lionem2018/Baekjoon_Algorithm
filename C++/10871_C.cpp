/**
 * 2018/08/12
 * 백준 10871 번 문제: X보다 작은 수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int n, x;
    
    scanf("%d %d", &n, &x);

    int numbers[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(numbers[i] < x)
        {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}