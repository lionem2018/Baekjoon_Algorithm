/**
 * 2018/08/09
 * 백준 1057 번 문제: 토너먼트
 * 언어: C++
*/

#include <iostream>

using namespace std;

int main(void)
{
    int playerNum, round = 0;
    int  kimNum, imNum;
    int index = 0;

    cin >> playerNum >> kimNum >> imNum;;

    for(int i = 0; playerNum > 1; i++)
    {
        round ++;

        if(playerNum % 2 == 1)
        {
            playerNum = playerNum / 2 + 1;
        }
        else
        {
            playerNum = playerNum / 2;
        }
    }

    while(index < round)
    {
        if(kimNum < imNum)
        {
            if((kimNum % 2 == 1) && (kimNum + 1 == imNum))
                break;
        }
        else
        {
            if((imNum % 2 == 1) && (kimNum == imNum + 1))
                break;
        }

        if(kimNum % 2 == 1)
            kimNum = kimNum / 2 + 1;
        else
            kimNum /= 2;
        
        if(imNum % 2 == 1)
            imNum = imNum / 2 + 1;
        else
            imNum /= 2;

        index ++;
    }

    if(index == round)
    {
        index = -1;
    }

    cout << index + 1;

    return 0;
}