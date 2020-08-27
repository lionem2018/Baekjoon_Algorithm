#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENTS_NUM 10000

typedef struct{
    int elements[MAX_ELEMENTS_NUM];
    int top;
} Stack;

int size(Stack *s)
{
    return (s->top)+1;
}

int empty(Stack *s)
{
    if(size(s) == 0) return 1;
    else return 0;
}

int top(Stack *s)
{
    if(empty(s)) return -1;
    else return s->elements[s->top];
}

void push(Stack *s, int data)
{
    if(size(s) >= MAX_ELEMENTS_NUM) return;
    else{
        s->top += 1;
        s->elements[s->top] = data;
    }
}

int pop(Stack *s)
{
    if(empty(s)) return -1;
    else{
        int data = s->elements[s->top];
        s->top -= 1;
        return data;
    }
}

int main(void)
{
    // stack 생성 및 초기화
    Stack *intStack = (Stack *) malloc(sizeof(Stack));
    intStack->top = -1;

    int N;
    int data;
    char command[6];
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%s", command);
        
        if(!strcmp(command, "push")){
            scanf("%d", &data);
            push(intStack, data);
        }
        else if(!strcmp(command, "pop")){
            printf("%d\n", pop(intStack));
        }
        else if(!strcmp(command, "size")){
            printf("%d\n", size(intStack));
        }
        else if(!strcmp(command, "empty")){
            printf("%d\n", empty(intStack));
        }
        else if(!strcmp(command, "top")){
            printf("%d\n", top(intStack));
        }
    }

    free(intStack);

    return 0;
}