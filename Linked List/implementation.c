#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node;
typedef struct{
    Node* head;
    Node* tail;
    int size;
} Linkedlist;
Node* createNode(Node* next , int data){
    Node* node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
Linkedlist*creatlinkedlist(){
    Linkedlist* list = (Linkedlist *)malloc(sizeof(Linkedlist));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}
void insert(int value , int position , Linkedlist* list){
    Node* node = malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    if(position==0){
        node->next = list->head;
        list->head = node;
        if(list->size==0){
            list->tail = node;
        }
    }
    else if(position==list->size){
        list->tail->next = node;
        list->tail = node;
    }
    else{
        Node* curr = list->head ;
        for(int i=0;i<position-1;i++){
            curr = curr->next;
        }
        node->next = curr->next ;
        curr->next = node;
    }
    list->size++;
}
void delete(int position,Linkedlist* list){
    if(list->head == NULL){
        return;
    }    
    Node* deleteNode;
    if(position==0){
        deleteNode = list->head;
        list->head = list->head->next;
        if(list->head==NULL){
            list->tail = NULL;
        }
    }
    else{
        Node* curr = list->head ;
        for(int i=0;i<position-1;i++){
            curr = curr->next;
        }
    }
    free(deleteNode);
    list->size--;
}
int main(){
    Linkedlist* list = creatlinkedlist();
    insert(10,0,list);
    insert(20,1,list);
    insert(30,1,list);
    Node* curr = list->head;
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
    return 0;
}