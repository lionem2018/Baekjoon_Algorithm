/**
 * 2018/08/09
 * 백준 2839 번 문제: 설탕 배달
 * 언어: C++
*/

#include <iostream>

using namespace std;

int main(void)
{
    int input, num;
    int fiveKg = 0, threeKg = 0;

    cin >> input;

    num = input;

    fiveKg = num / 5;
    num %= 5;
    threeKg = num / 3;
    num %= 3;

    if (num > 0)
    {
        num += threeKg * 3;
        threeKg = 0;

        for (int i = 0; fiveKg > 0 && num <= input; i++)
        {
            fiveKg--;
            num += 5;

            if (num % 3 == 0)
            {
                threeKg = num / 3;
                num %= 3;
                break;
            }
        }
    }

    if (num != 0)
        cout << -1 << endl;
    else
        cout << fiveKg + threeKg << endl;

    return 0;
}