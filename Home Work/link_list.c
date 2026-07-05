#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node* head){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct  Node* head = (struct Node *)malloc(sizeof(struct Node));
    struct Node* a = (struct Node *)malloc(sizeof(struct Node));
    struct Node* b = (struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next = a;
    
    a->data = 20;
    a->next = b;

    b->data = 30;
    b->next = NULL;

    printList(head);
    
    return 0;
}