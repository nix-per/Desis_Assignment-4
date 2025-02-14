#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        int idx = it - v.begin();

        if (idx < n && v[idx] == x)
        {
            cout << "Yes " << idx + 1 << endl;
        }
        else
        {
            cout << "No " << idx + 1 << endl;
        }
    }
    return 0;
}
