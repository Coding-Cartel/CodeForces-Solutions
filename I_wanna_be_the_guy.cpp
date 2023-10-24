#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q,i,j,cn=0;
      cin>>n;
      int a[2*n]={0};
      cin>>p;
      for ( i=0; i<p; i++){
        cin>>a[i];
      }
      cin>>q;
      for ( j=0; j<q; j++,i++){
        cin>>a[i];
      }
    for ( j=1; j<=n; j++){
      for ( i=0; i<(p+q); i++){
        if( j==a[i]){ cn++; break;}
      }
    }
      if (cn==n){
        cout<<"I become the guy."<<endl;
      }
      else{
        cout<<"Oh, my keyboard!"<<endl;
      }
    return 0;
}