#include<bits/stdc++.h>
using namespace std;
void lower(string s){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;
}
void upper(string s){
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int low=0,upp=0;
    for(int i=0;i<n;i++){
        if(int(s[i])>=65 && int(s[i])<=90){
            upp++;
        }
        else{
            low++;
        }
    }
    if(low>=upp){
        lower(s);
    }
    else{
        upper(s);
    }
    return 0;
}