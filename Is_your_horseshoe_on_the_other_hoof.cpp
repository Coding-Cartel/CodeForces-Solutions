#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    long long int a[15];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            c++;
        }
    }
    cout<<n-c<<endl;
}