#include<bits/stdc++.h>
using namespace std;
    int heap[100];
    int sz = 0;
    void insert(int val){
        sz++;
        int i=sz;
        heap[i] = val;
        while(i>1){
            int par = i/2;
            if(heap[par]<=heap[i]){
                break;
            }
            int temp = heap[par];
            heap[par] = heap[i];
            heap[i] = temp;
            i = par;
        }
    }
   
int main(){
        int n;
        cin>>n;

        int val;
        for(int i=0;i<n;i++){
            cin>>val;
            insert(val);
        }
        cout<<"Min Heap: ";
        for(int i=1;i<=sz;i++){
            cout<<heap[i]<<" ";
        }
}
