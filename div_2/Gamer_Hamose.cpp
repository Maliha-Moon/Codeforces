#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long h;
        cin >> n >> h;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        if (h <= a[n - 1])
            cout << "1" << endl;
        else if ((a[n - 2] + a[n - 1]) >= h)
            cout << "2" << endl;
        else
        {
            if (h % (a[n - 1] + a[n - 2]) == 0)
                cout << (h / (a[n - 1] + a[n - 2])) * 2 << endl;
            else if (h % (a[n - 1] + a[n - 2]) <= a[n - 1])
                cout << ((h / (a[n - 1] + a[n - 2])) * 2) + 1 << endl;
            else
                cout << ((h / (a[n - 1] + a[n - 2])) * 2) + 2 << endl;
        }
        
    }

    return 0;
}
