#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;

    scanf("%d", &num);

    int input[num+1];

    for(int i = 1; i <= num; i++)
    {
        scanf("%d", &input[i]);
    }

    for(int i = num; i > 1; i++)
    {

    }

    for(int i = 1; i <= num; i++)
    {
        printf("%d\n", input[i]);
    }

    return 0;
}