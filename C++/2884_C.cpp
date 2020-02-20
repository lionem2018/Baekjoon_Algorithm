#include <iostream>

int main(void)
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    
    if(minute < 45)
    {
        if(hour == 0)
            hour = 23;
        else
            hour--;
        minute = 60 + minute - 45;
    }
    else
        minute -= 45;

    printf("%d %d\n", hour, minute);
    
    return 0;
}