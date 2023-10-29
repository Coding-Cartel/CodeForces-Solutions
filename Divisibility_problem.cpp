#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int a,b;
    cin>>t;
    while(t--){
        int div=0,ans=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
        div=a/b;
        ans=(div+1)*b;
        cout<<ans-a<<endl;
    }
}