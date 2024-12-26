// 800, div: 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            int counta = 0, countb = 0;
            set<int> s;
            for (int i = 0; i < n; i++)
            {
                s.insert(arr[i]);
            }

            if (s.size() > 2)
            {
                cout << "NO" << "\n";
            }
            else
            {
                sort(arr, arr + n);
                for (int i = 1; i < n; i++)
                {
                    if (arr[0] == arr[i])
                    {
                        counta++;
                    }
                }
                for (int i = n - 2; i >= 0; i--)
                {
                    if (arr[n - 1] == arr[i])
                    {
                        countb++;
                    }
                }
                int differance = abs(counta - countb);
                if (differance <= 1)
                {
                    cout << "YES" << "\n";
                }
                else
                {
                    cout << "NO" << "\n";
                }
            }
        }
    }
    return 0;
}

