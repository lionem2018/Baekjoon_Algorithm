#include <iostream>

int main(void)
{
    int test_case;
    int A, B;

    scanf("%d", &test_case);

    for(int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &A, &B);

        printf("Case #%d: %d + %d = %d\n", i+1, A, B, A+B);
    }

    return 0;
}