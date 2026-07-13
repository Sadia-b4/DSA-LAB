#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int low = 1 , high = n;
    while(low<=high){
        int mid = (low+high)/2;
        int ans = mid*mid;
        if(ans==n){
            cout<<mid<<endl;
            break;
        }
        else if(ans>n){
            high = mid;
        }
    }
    return 0;
}