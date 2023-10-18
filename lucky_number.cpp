#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0,temp=n;
    while(n>0){
        count++;
        n /=10;
    }
    switch (count)
    {
    case 1:
        if(temp%4==0 || temp%7==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        break;
    case 2:
        if(temp%4==0 || temp%7==0 || temp%47==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        break;
    case 3:
        if(temp%4==0 || temp%7==0 || temp%47==0 || temp%744==0 || temp%477==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        break;
    case 4:
        if(temp%4==0 || temp%7==0 || temp%47==0 || temp%744==0 || temp%477==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        break;
    }
    return 0;    
}