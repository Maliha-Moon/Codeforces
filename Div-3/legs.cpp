// A
//  div 3(962), A
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
        int cnt = 0;
        if (n == 2 || n == 4)
        {
            cout << "1\n";
        }
        else if (n > 4)
        {

            while (n >= 2)
            {
                if (n >= 4)
                {
                    n = n - 4;
                    cnt++;
                }
                else
                {
                    n = n - 2;
                    cnt++;
                }
            }
            cout << cnt << "\n";
        }
    }

    return 0;
}
