// div 2, A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        if (k == 1)
        {
            cout << xc << " " << yc << "\n";
        }
        else if (k % 2 == 0)
        {
            for (int i = 1; i <= k / 2; i++)
            {
                cout << xc << " " << yc + i << "\n";
                cout << xc << " " << yc - i << "\n";
            }
        }

        else if (k != 1 && k % 2 != 0)
        {
            cout << xc << " " << yc << "\n";
            for (int i = 1; i <= (k - 1) / 2; i++)
            {

                cout << xc << " " << yc + i << "\n";
                cout << xc << " " << yc - i << "\n";
            }
        }
    }
    return 0;
}