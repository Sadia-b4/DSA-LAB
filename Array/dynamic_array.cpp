#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
        sum+=a[i];
    }
    cout << endl;
    double avg = (double)sum/n;
    cout << "Average is = "<< avg<<endl;
    return 0;
}