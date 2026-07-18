#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 157;
    int low = 0 , high =num;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if((long long)mid*mid==num){
            ans = mid;
            break;
        }
        else if((long long)mid*mid<num){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    double root = ans;
    double incr = 0.1;
    for(int i=0;i<1;i++){
        while(root*root<=num){
            root+=incr;
        }
        root-=incr;
        incr/=10;
    }
    cout <<fixed <<setprecision(1)<< root<<endl;
}