#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    
    for(i=2;i<=n;i++){
        bool f=true;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                f= false;
                break;
            }
        }
        if(f){
            cout<<i<<" ";
        }
    }
    return 0;
}