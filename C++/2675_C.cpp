/**
 * 2018/08/24
 * 백준 2675 번 문제: 문자열 반복
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    int caseNum, index = 0;

    char *inputArray[1000];

    scanf("%d", &caseNum);

    while(index < caseNum)
    {

        int num;
        char input[21] = {0};

        scanf("%d", &num);
        scanf("%s", input);

        inputArray[index] = (char *) calloc(sizeof(char), num * strlen(input) + 1);

        for(int i = 0; i < strlen(input) * num; i++)
        {
            inputArray[index][i] = input[i/num];
        }

        index ++;
    }

    for(int i = 0; i < caseNum; i++)
    {
        printf("%s\n", inputArray[i]);
    }

    return 0;
}