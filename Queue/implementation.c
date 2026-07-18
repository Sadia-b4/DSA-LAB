#include<stdio.h>
#define CAPACITY 100
typedef struct{
    int data[CAPACITY];
    int front ;
    int rear;
} Queue;
void inQueue(Queue* q){
    q->front = 0;
    q->rear  = -1;
}
int isempty(Queue* q){
    return q->rear < q->front;
}
int isfull(Queue* q){
    return q->rear == CAPACITY-1;
}
void enqueue(Queue* q ,int value){
    if(isfull(q)){
        printf("Queue is Full, cannot enqueue.\n");
        return;
    }
    q->rear++;
    q->data[q->rear] = value;
}
int dequeue(Queue* q){
    if(isempty(q)){
        printf("Queue is Empty, cannot dequeue.\n");
        return -1;
    }
    int value = q->data[q->front];
    q->front++;
    return value;
}
int peek(Queue* q){
    if(isempty(q)){
        printf("Queue is empty.\n");
        return -1;
    }
    return q->data[q->front];
}
void print_q(Queue* q){
    if(isempty(q)){
        printf("Queue is empty.\n");
        return ;
    }
    printf("Front -> ");
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->data[i]);

    }
    printf("<- Rear\n");
}
int main(){
    Queue q;
    inQueue(&q);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    print_q(&q);
    printf("Dequeued : %d\n",dequeue(&q));
    print_q(&q);

    printf("Peek: %d\n",peek(&q));

    enqueue(&q,40);
    print_q(&q);
    return 0;
}