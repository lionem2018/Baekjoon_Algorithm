#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    int input[101] = {0};
    bool isSosu[1001] = {false};

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &input[i]);
    }

    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(input[j] % i == 0)
            {
                input[j] = 0;
            }
            else if(input[j] == 1)
            {
                input[j] = 0;
            }
        }
    }

    for(int i = 0; i < num; i++)
    {
        if(input[i] != 0)
        {
            printf("%d\n", input[i]);
        }
    }

    return 0;
}