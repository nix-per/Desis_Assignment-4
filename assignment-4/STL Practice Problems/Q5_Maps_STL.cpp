#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    int q;
    cin >> q;

    while (q--)
    {
        int type;
        string name;
        cin >> type >> name;

        if (type == 1)
        {
            int marks;
            cin >> marks;
            m[name] += marks;
        }
        else if (type == 2)
        {
            m.erase(name);
        }
        else if (type == 3)
        {
            cout << m[name] << endl;
        }
    }

    return 0;
}
