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
        string vl = "aeiou";

        int j = 1;

        for (int i = 0; i < n; i++)
        {
            cout << vl[i % 5];
        }

        cout << "\n";
    }
    return 0;
}