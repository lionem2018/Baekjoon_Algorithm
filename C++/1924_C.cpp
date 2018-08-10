/**
 * 2018/08/10
 * 백준 1924 번 문제: 2007년
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int month, day;
    int totalDays = 0;
    char yoil[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    scanf("%d %d", &month, &day);

    for(int i = 1; i < month; i++)
    {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            totalDays += 31;
        }
        else if(i == 2)
        {
            totalDays += 28;
        }
        else
        {
            totalDays += 30;
        }
    }

    totalDays += day;

    printf("%s", yoil[totalDays%7]);

    return 0;
}