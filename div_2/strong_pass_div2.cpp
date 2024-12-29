// A
//  div 3(964), A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string ans = "";
        int f = 0;                      // we can insert exactly once
        for (int i = 0; i < n - 1; i++) // iterate until the 2nd last character
        {
            if (s[i] == s[i + 1] && f == 0)
            {
                ans += s[i]; // Add the current character to the result
                if (s[i] == 'z')
                {
                    ans += 'a';
                }
                else
                {
                    ans += (s[i] + 1); // Insert the next character in the alphabet
                }
                f = 1; // Mark that the insertion has been done
            }
            else
                ans += s[i]; // Otherwise, just add the current character
        }
        ans += s[n - 1]; // add tha last character of the original string
        if (f != 1)
        {
            if (s[n - 1] != 'z')
                ans += (s[n - 1] + 1); // Insert the next character in the alphabet at the end
            else
                ans += 'a';
        }
        cout << ans << "\n";
    }

    return 0;
}
