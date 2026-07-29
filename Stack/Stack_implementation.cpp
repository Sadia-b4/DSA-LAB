#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->next = next;
        this->prev = prev;
        this->val = val;
    }

};
class myStack{
    public:
    int size = 0;
    Node* head = NULL;
    Node* tail = NULL;
    void push(int val){
        size++;
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop(){
        size--;
        Node* deleteNode = tail;
        tail = tail->prev;
        
        if(tail==NULL){
            head = NULL;
            return;
        }
        else{
        tail->next = NULL;
        }
        delete deleteNode;
    }
    int top(){
        return tail->val;
    }
    int sizee(){
        return size;
    }
    bool empty(){
        return head==NULL;
    }
};
int main(){
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}