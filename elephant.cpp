#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5]={5,4,3,2,1};
    int min=0;
    for(int i=0; i<5; i++){
        min+=n/arr[i];
        n=n%arr[i];
    }
    cout<<min<<endl;
    return 0;
}