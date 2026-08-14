#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i , freq[256] = {0};
    for(i=0;s[i]!='\0';i++)
    {
        freq[s[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]!=0){
            cout<< char(i) << "->" <<freq[i]<<endl;
        }
    }
}