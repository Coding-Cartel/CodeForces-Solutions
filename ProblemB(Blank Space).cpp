#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,count=0,m=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
                m=max(count,m);
            }else {
                count=0;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}