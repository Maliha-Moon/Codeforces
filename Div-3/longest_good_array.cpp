// c
//  div 3(954), c
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long j = 0, cnt = 0;
        for (long long i = l; i <= r; i++)
        {
           i = i + j;
            j++;
            cnt++;
        }
        cout << cnt  << "\n";
    }

    return 0;
}
