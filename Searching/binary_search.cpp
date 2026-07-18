#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res = -1;
    int target;
    cin>>target;
    int low = 0; 
    int high = n;
    while(high>=low){
        int mid = (low+high)/2;
        if(a[mid]==target){
            res = mid ;
            break;
        }
        else if(a[mid]<target){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    if(res!=-1){
        cout << "Target found at: "<< res << "th position";
    }
    else{
        cout << "Not Found!";
    }
    return 0;
}