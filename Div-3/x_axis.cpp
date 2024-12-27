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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        // a=x1
        int b1 = abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3);
        // a=x2
        int b2 = abs(x2 - x1) + abs(x2 - x2) + abs(x2 - x3);
        // a=x3
        int b3 = abs(x3 - x1) + abs(x3 - x2) + abs(x3 - x3);

        cout << min(b1, min(b2, b3)) << "\n";
    }

    return 0;
}
