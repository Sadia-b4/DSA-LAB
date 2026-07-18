//root of 157

#include<bits/stdc++.h>
using namespace std;
int main(){
    double num = 157;
    double low = 0 ;
    double high = max(1.0,num);
    double precision = 0.1;
    while(high-low>precision){
        double mid = (low+high)/2.0;
        double ans = mid*mid;
           
        
         if(ans<num){
            low = mid ;
        }
        else{
            high = mid;
        }
    }
    cout << fixed << setprecision(1) << (low+high)/2 <<endl;
    return 0;
}