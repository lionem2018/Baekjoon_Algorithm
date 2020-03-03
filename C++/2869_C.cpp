/*
2020/03/03
Baekjoon Online Judge
Problem 2869: 달팽이는 올라가고 싶다
땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.
달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.
달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int A, B, V;
    int answer;

    scanf("%d %d %d", &A, &B, &V);

    answer = (V - B) / (A - B);

    if((V-B) % (A-B))
        answer ++;

    printf("%d\n", answer);

    return 0;
}