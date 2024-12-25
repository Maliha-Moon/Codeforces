#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count_A = 0, count_D = 0;
    cin >> n;
    string name;
    cin >> name;
    
    for (int i = 0; i < n; i++)
    {
        if (name[i] == 'A')
            count_A++;
        else
            count_D++;
    }

    if (count_A > count_D)
    {
        cout << "Anton" << endl;
    }
    else if (count_A == count_D)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    return 0;
}