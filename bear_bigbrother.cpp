#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int digit=0;
    while(a<=b){
        a =a *3;
        b=b*2;
        digit++;
    }
    cout<<digit<<endl;
    return 0;
}