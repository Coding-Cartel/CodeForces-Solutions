#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int n=1 ,temp=0;
    while(n!=0){
        x++;
        temp=x;
        int a = x/1000;
        int b = x/100 % 10;
        int c = x/10 % 10;
        int d = x % 10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            n=0;
        }
    }
    cout<<temp<<endl;
    return 0;
}