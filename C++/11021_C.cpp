#include <iostream>

int main(void)
{
    int test_num;
    int A, B;

    scanf("%d", &test_num);

    for(int i = 0; i < test_num; i++)
    {
        scanf("%d %d", &A, &B);

        printf("Case #%d: %d\n", i+1, A+B);    
    }

    return 0;
}