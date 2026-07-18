#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    public:
    int heap[100];
    int n ;
    MaxHeap(){
        n=0;
    }
   

void insert_value(int val){
    heap[n] = val ;
    int i=n;
    n++;
    while(i>0){
        int parent = (i-1)/2;
        if(heap[parent]<heap[i]){
            swap(heap[parent],heap[i]);
            i = parent;
        }
        else{
            break;
            
        }
        i = parent;
    }
}
void print_max_heap(){
    for(int i=0;i<n;i++){
        cout << heap[i] << " ";
    }
    cout << endl;
}
};
int main(){
    MaxHeap h;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        h.insert_value(x);
    }
    h.print_max_heap();
    
}