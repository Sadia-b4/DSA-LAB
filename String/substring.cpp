#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Sylhet Engineering College,Sylhet";
    string subS = "ollege";
    int m = s.length();
    int n = subS.length();
    int idx = -1;
    for(int i=0;i<=m-n;i++){
        int j;
        for( j=0;j<n;j++){
            if(s[i+j]!=subS[j]){
                break;
            }
        }
        if(j==n){
            idx = i;
            break;
        }
    }
    if(idx!=-1){
        cout<< "Substring found at index : "<<idx <<" to "<<idx+n-1;
    }
    else{
        cout<<"Substring Not Found";
    }

}