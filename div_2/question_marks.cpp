/* A. Question Marks
*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        int ans = 0;
        for (auto &it : mp)
        {
            if (it.first == 'A')
            {
                if (it.second >= n)
                    ans += n;
                else
                    ans += it.second;
            }
            if (it.first == 'B')
            {
                if (it.second >= n)
                    ans += n;
                else
                    ans += it.second;
            }
            if (it.first == 'C')
            {
                if (it.second >= n)
                    ans += n;
                else
                    ans += it.second;
            }
            if (it.first == 'D')
            {
                if (it.second >= n)
                    ans += n;
                else
                    ans += it.second;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}