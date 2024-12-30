// B
//  div 3(954), B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b % 2 != 0)
        {
            if (a == 0)
                cout << "NO\n";
            else if (a == b)
                cout << "NO\n";
            else if (a % 2 != 0)
                cout << "NO\n";
            else 
                cout << "YES\n";
        }

        else
        {
            if (a % 2 != 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}
