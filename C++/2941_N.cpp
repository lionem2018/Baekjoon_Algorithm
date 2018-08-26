#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char input[101];
    char alphabet[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int cnt = 0, index = 0;

    scanf("%s", input);

    while(index < strlen(input))
    {
        for(int i = 0; i < 8; i++)
        {
            if(alphabet[i][0] == input[index])
            {
                int j;
                for(j = 1; j < strlen(alphabet[i]); j++)
                {
                    if(alphabet[i][j] != input[index+j])
                    {
                        break;
                    }
                }

                if(j == strlen(alphabet[i]))
                {
                    cnt ++;
                    index += strlen(alphabet[i]);
                    scanf("%s\n", alphabet[i]);
                }
            }
        }
        cnt ++;
        index++;
    }

    printf("%d", cnt - 1);

    return 0;
}