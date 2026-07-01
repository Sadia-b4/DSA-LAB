#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int top;
    int size;
    int *arr;
}Stack;
Stack  *createStack(int size){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = -1;
    stack->size = size;
    stack->arr = (int *)malloc(sizeof(int)*size);
    return stack;
}
void push(Stack *stack ,int item){
    if(stack->top==stack->size-1){
        printf("Stack Overflow!!");
    }
    stack->top += 1 ;
    stack->arr[stack->top] = item;
}
int pop(Stack *stack){
    if(stack->top == -1){
        printf("Stack is empty!");
        return -1;
    }
    int val = stack->arr[stack->top];
    stack->top -= 1;
    return val;
}
int peek(Stack *stack){
    if(stack->top == -1){
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}
int is_empty(Stack *stack){
    return stack->top == -1;
}
int is_full(Stack *stack){
    return stack->top == stack->size - 1;
}
void freeStack(Stack *stack){
    free(stack->arr);
    free(stack);
}

int main(){
    Stack *s1 = createStack(5);
    push(s1,12);
    push(s1,13);
    push(s1,14);
    push(s1,15);
    push(s1,16);
    int r = pop(s1);
    printf("%d",r);
    freeStack(s1);
    return 0;
}