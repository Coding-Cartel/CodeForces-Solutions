#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,x="hello";
    cin>>s;
    int i=0,count=0;
    for(int j=0;j<s.size();j++){
        if(s[j]==x[i]){
            i++;
            count++;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}