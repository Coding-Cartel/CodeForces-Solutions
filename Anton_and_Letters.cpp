#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> k;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            k.insert(s[i]);
        }
    }
    cout << k.size()<<endl;
    return 0;
}