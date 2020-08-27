#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS_NUM 100000

typedef struct{
    int elements[MAX_ELEMENTS_NUM];
    int top;
} Stack;

int size(Stack * s)
{
    return (s->top) + 1;
}

void push(Stack * s, int data)
{
    if(size(s) >= MAX_ELEMENTS_NUM) return;
    else{
        s->top += 1;
        s->elements[s->top] = data;
    }
}

int pop(Stack * s)
{
    if(size(s) <= 0) return -1;
    else{
        int data = s->elements[s->top];
        s->top -= 1;
        return data;
    }
}

int main(void)
{
    Stack * intStack = (Stack *) malloc(sizeof(Stack));
    intStack->top = -1;

    int K;
    int input;
    int answer = 0;

    scanf("%d", &K);

    for(int i = 0; i < K; i++) {
        scanf("%d", &input);

        if(input == 0) pop(intStack);
        else push(intStack, input);
    }

    for(int i = 0; i < size(intStack); i++)
        answer += intStack->elements[i];

    printf("%d\n", answer);

    return 0;
}