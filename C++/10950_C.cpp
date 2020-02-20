#include <iostream>

int main(void)
{
    int test_num;
    int A, B;

    scanf("%d", &test_num);

    for(int i = 0; i < test_num; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }

    return 0;
}