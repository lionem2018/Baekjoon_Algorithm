/*
2020/02/29
Baekjoon Online Judge
Problem 2941: 크로아티아 알파벳
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
*/

#include <iostream>

int main(void)
{
    int answer = 0;
    char input_char[101];

    scanf("%s", input_char);

    for(int i = 0; input_char[i] != '\0'; i++)
    {
        if(input_char[i] == 'c')
        {
            if(input_char[i+1] == '=' || input_char[i+1] == '-')
                i++;
        }
        else if(input_char[i] == 'd')
        {
            if(input_char[i+1] == 'z' && input_char[i+2] == '=')
                i += 2;
            else if(input_char[i+1] == '-')
                i++;

        }
        else if(input_char[i] == 'l' && input_char[i+1] == 'j')
        {
            i++;

        }
        else if(input_char[i] == 'n' && input_char[i+1] == 'j')
        {
            i++;
        }
        else if(input_char[i] == 's' && input_char[i+1] == '=')
        {
            i++;
        }
        else if(input_char[i] == 'z' && input_char[i+1] == '=')
        {
            i++;
        }

        answer ++;
        
    }

    printf("%d\n", answer);
        
    return 0;
}