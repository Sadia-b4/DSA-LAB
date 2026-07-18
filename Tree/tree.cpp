#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert(Node* root,int val){
    Node* newNode = new Node(val);
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
}
int main(){
    Node* root = new Node(10);
    insert(root,20);
    insert(root,30); 
}