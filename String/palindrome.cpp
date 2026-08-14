#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int len = s.length();
    for(int i=0,j=len-1;i<len/2;i++,j--){
        if(s[i]!=s[j]){
            cout<<"Not palindrome!";
            return 0;
        }
    }
    cout<<"Palindrome";
    return 0;
}