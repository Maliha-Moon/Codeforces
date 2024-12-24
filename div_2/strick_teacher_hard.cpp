#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int m, q;
        cin >> n >> m >> q;
        long long b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        long long d[q];
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
            if (d[i] < b[0])
                cout << b[0] - 1 << "\n";
            else if (d[i] > b[m - 1])
                cout << n - b[m - 1] << "\n";
            else
            {
                auto it = upper_bound(b, b + m, d[i]);
                long long t1 = *(it - 1);
                long long t2 = *it;
                long long mid = (t1 + t2) / 2;
                cout << min(abs(mid - t1), abs(mid - t2)) << "\n";
            }
        }
    }
    return 0;
}