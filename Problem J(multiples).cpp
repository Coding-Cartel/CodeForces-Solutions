#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    
    if(a%b==0 || b%a==0)
{
    cout<<"Multiples"<<endl;   
}
else cout<<"No Multiples"<<endl;
 
    return 0;
}
