#include <stdio.h>

int main(void)
{
    int N;
    char inputs[50];
    int cnt;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%s", inputs);
        cnt = 0;

        for(int j = 0; inputs[j] != '\0'; j++) { 
            if(inputs[j] == '(')
                cnt ++;
            else
                cnt --;

            if(cnt < 0)
                break;
        }

        if(cnt == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}