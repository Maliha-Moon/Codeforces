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
        long long d;
        cin >> d;


        if (d > b[0] && d > b[1])
        {
            cout << n - max(b[0], b[1]) << "\n";
        }
        else if (d < b[0] && d < b[1])
        {
            cout << min(b[0], b[1]) - 1 << "\n";
        }
        else
        {
            long long mid = (b[0] + b[1]) / 2;
            cout << min(abs(mid - b[0]), abs(mid - b[1])) << "\n";
        }
    }
    return 0;
}