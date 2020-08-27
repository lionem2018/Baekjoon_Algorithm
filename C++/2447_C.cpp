#include <iostream>

/**
 * 별로 채워진 array에 구멍뚫는 함수
 * @param array 구멍을 뚫을 2차원 별('*') 행렬
 * @param n array의 행 길이
 * @param start_x 구멍을 뚫기 위한 별 행렬 영역의 시작 위치 x좌표
 * @param start_y 구멍을 뚫기 위한 별 행렬 영역의 시작 위치 y좌표
 */
void punch_stars(char** array, int n, int start_x, int start_y)
{
    // 구멍을 뚫기 위해 n*n 행렬 순회
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // 9등분 했을 때의 가운데 칸에 (n/3)*(n/3) 크기 구멍 뚫음('*' -> ' '로 저장)
            if((i / (n/3) == 1) && (j / (n/3) == 1)){
                array[start_x+i][start_y+j] = ' ';
            // 가운데를 제외한 칸은 작은 단위 (n/3)*(n/3) 크기의 별 행렬에서 구멍을 뚫기 위해 재귀 호출 (단, n > 3)
            }else if((i % (n/3) == 0) && (j % (n/3) == 0)){
                if (n > 3) punch_stars(array, n/3, start_x+i, start_y+j);
            }
        }
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);

    // N*N array 배열 동적 할당
    char** array = (char**)malloc(sizeof(char*)*N);
    for(int i = 0; i < N; i++)
        array[i] = (char*)malloc(sizeof(char)*N);

	// N*N 행렬 전체에 '*' 저장
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            array[i][j] = '*';

	// 구멍뚫기
    punch_stars(array, N, 0, 0);

	// 별 출력
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%c", array[i][j]);
        printf("\n");
    }

    return 0;
}