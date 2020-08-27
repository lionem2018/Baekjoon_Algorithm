#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100000

typedef int Element;
typedef struct {
    Element elements[MAX_STACK_SIZE];
    int top;
} Stack;

int size(Stack *s)
{
    return (s->top) + 1;
}

void push(Stack *s, Element data)
{
    if(size(s) >= MAX_STACK_SIZE) return;
    else {
        s->elements[++(s->top)] = data;
    }
}

int pop(Stack *s)
{
    if(size(s) <= 0) return -1;
    else return s->elements[(s->top)--];
}

int peek(Stack *s)
{
    if(size(s) <= 0) return -1;
    else return s->elements[s->top];
}

int main(void)
{
    Stack *intStack = (Stack *) malloc(sizeof(Stack));
    intStack->top = -1;

    int N;
    int inputs[MAX_STACK_SIZE];
    char outputs[MAX_STACK_SIZE * 2];
    int num = 1, outputIndex = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) scanf("%d", &inputs[i]);

    for(int i = 0; i < N; i++) {
        if(peek(intStack) > inputs[i])
            break;
        else if(peek(intStack) == inputs[i]) {
            pop(intStack);
            outputs[outputIndex++] = '-';
        }
        else {
            while(peek(intStack) < inputs[i]){
                push(intStack, num++);
                outputs[outputIndex++] = '+';
            }
            pop(intStack);
            outputs[outputIndex++] = '-';
        }
    
    }

    if(size(intStack) != 0)
        printf("NO");
    else{
        for(int i = 0; i < N*2; i++) printf("%c\n", outputs[i]);
    }

    free(intStack);
    
    return 0;
}