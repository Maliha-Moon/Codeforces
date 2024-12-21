/* 965
   B. Minimize Equal Sum Subarrays
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
        cin >> n;

        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int q[n];
        for (int i = 0; i < n; i++)
        {
            q[i] = p[(i + 1) % n];
        }

        for (int i = 0; i < n; i++)
        {
            cout << q[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}