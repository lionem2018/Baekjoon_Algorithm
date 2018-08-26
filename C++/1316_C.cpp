/**
 * 2018/08/26
 * 백준 1316 번 문제: 그룹 단어 체커
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    int num, index = 0;
    int cnt = 0;

    scanf("%d", &num);

    while(index < num)
    {
        char input[101];
        int alphabet[26];
        int i = 0;

        scanf("%s", input);

        for(i = 0; i < 26; i++)
        {
            alphabet[i] = -1;
        }

        alphabet[input[0] - 'a'] = 0;

        for(i = 1; i < strlen(input); i++)
        {
            if (alphabet[input[i] - 'a'] == -1)
            {
                alphabet[input[i] - 'a'] = i;
            }
            else if(alphabet[input[i]- 'a'] + 1 == i)
            {
                alphabet[input[i] - 'a'] = i;
            }
            else
                break;
        }

        if(i == strlen(input))
            cnt++;

        index ++;
    }

    printf("%d", cnt);

    return 0;
}