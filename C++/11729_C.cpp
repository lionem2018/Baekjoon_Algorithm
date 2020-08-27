#include <iostream>

using namespace std;

/**
 * 원판 옮긴 횟수 구하는 함수
 * @param n 원판 개수
 * @return 옮긴 횟수
 */
int count_hanoi_tower(int n)
{
    if(n == 1) return 1;
    else return 2 * count_hanoi_tower(n-1) + 1;
}

/**
 * 원탑의 움직임을 출력하는 함수
 * 첫번째 출력 숫자는 출발 탑의 번호이고, 두번째 출력 숫자는 도착 탑의 번호
 * @param n 원판 개수
 * @param from 출발 탑의 번호
 * @param tmp 임시로 옮길 수 있는 탑의 번호
 * @param to 도착 탑의 번호
 */
void move_hanoi_tower(int n, int from, int tmp, int to)
{
    if(n == 1) printf("%d %d\n", from, to);
    else {
        move_hanoi_tower(n-1, from, to, tmp);
        printf("%d %d\n", from, to);
        move_hanoi_tower(n-1, tmp, from, to);
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);

    // 원판 옮긴 횟수 출력
    printf("%d\n", count_hanoi_tower(N));
    // 옮기는 과정 출력
    move_hanoi_tower(N, 1, 2, 3);

    return 0;
}