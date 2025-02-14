#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int diff = abs(m - n);
        if (diff < k)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << diff - k << endl;
        }
    }
}
