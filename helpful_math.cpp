#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
            ans.push_back(s[i]-'0');
	    }
	}
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i);
        if(i==ans.size()-1){
            break;
        }
        cout<<"+";
    }
    return 0;
}