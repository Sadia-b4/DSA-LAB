#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    int pos;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            ans = 0;
            pos = i;
            break;
        }
    }
    if(ans!=0){
        cout << "-1"<<endl;
    }
    else{
        cout<< "Target found at: " << pos << "th index" << endl;
    }
    return 0;
}