#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   cin>>a>>b>>c;

   // first part
   if(a<=b && b<=c)
   {
       cout<<a<<'\n'<<b<<'\n'<<c<<endl;
   }
   else if(a>=b && b>=c)
   {
       cout<<c<<'\n'<<b<<'\n'<<a<<endl;
   }
else if(b<=a && c<=a){
    cout<<b<<'\n'<<c<<'\n'<<a<<endl;
}
else if(b<=a && a<=c){
     cout<<b<<'\n'<<a<<'\n'<<c<<endl;
}
else if(a<=c && c<=b) {
    cout<<a<<'\n'<<c<<'\n'<<b<<endl;
}
else {
    cout<<c<<'\n'<<a<<'\n'<<b<<endl;
}

cout<<'\n';

//second part 
cout<<a<<'\n'<<b<<'\n'<<c<<endl;
    return 0;
}
