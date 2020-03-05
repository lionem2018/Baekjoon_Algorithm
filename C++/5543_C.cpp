/*
2020/03/05
Baekjoon Online Judge
Problem 5543: 상근날드
햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int input_price;
    int buger = 2001, soda = 2001;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &input_price);

        if(buger > input_price)
            buger = input_price;
    }

    for(int i = 0; i < 2; i++)
    {
        scanf("%d", &input_price);

        if(soda > input_price)
            soda = input_price;
    }

    printf("%d\n", buger+soda-50);

    return 0;
}