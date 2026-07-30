#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s){
       this->s = s;
       next = NULL;
       prev = NULL;
    }

};
class myStack{
    public:
    int size = 0;
    Node* head = NULL;
    Node* tail = NULL;
    void push(string s){
       
        Node* newNode = new Node(s);
         size++;
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
        if(empty()){
            return;
        }
        Node* deleteNode = tail;
        tail = tail->prev;
        
        if(tail==NULL){
            head = NULL;
            
        }
        else{
        tail->next = NULL;
        }
        delete deleteNode;
        size--;
    }
    string top(){
        if(empty()){
            return "";
        }
        return tail->s;
    }
    int sizee(){
        return size;
    }
    bool empty(){
        return head==NULL;
    }
    void clear(){
        while(!empty()){
            pop();
                }
    }
};
int main(){
  
   myStack undo , redo;
   undo.push("");
   while(true){
    cout << "1.Type" <<endl << "2.Undo" <<endl << "3.Redo"<<endl<<"4.Exit"<<endl;
    int ch;
    cin>>ch;
    if(ch==1){
        string str;
        cin>>str;
        undo.push(str);
        redo.clear();

    }
    else if(ch==2){
        if(undo.sizee()>1){
            redo.push(undo.top());
            undo.pop();
        }
    }
    else if(ch==3){
        if(!redo.empty()){
            undo.push(redo.top());
            redo.pop();
        }
    }
    else{
        break;
    }
   
   cout << "Current Text: " <<undo.top()<<endl;
}
    return 0;
}