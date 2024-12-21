// div 4, A
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
        int sec = n % 10;
        int fir = n / 10;
        cout << fir + sec << "\n";
    }
    return 0;
}
