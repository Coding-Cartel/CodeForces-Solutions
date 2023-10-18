//https://codeforces.com/problemset/problem/1882/B

#include <bits/stdc++.h>
using namespace std;

bool comp(const vector<int> &v1, const vector<int> &v2)
{
    return (v1.size() < v2.size());
} // comparator function to sort

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int temp;
                cin >> temp;
                arr[i].push_back(temp);
                s.insert(temp);
            }
        }
        int std = s.size();
        s.clear();
        int ans = 0;
        for (int i = 1; i <= 50; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int fl = 1;
                for (auto x : arr[j])
                {
                    if (x == i)
                    {
                        fl = 0;
                        break;
                    }
                }
                if (fl == 1)
                {
                    s.insert(arr[j].begin(), arr[j].end());
                }
            }
            if (s.size() != std)
            {
                ans = max(ans, (int) s.size());
            }
            s.clear();
        }
        cout << ans << "\n";
    }
    return 0;
}