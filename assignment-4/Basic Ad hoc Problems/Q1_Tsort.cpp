#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            ans.push_back(v1[i++]);
        }
        else
        {
            ans.push_back(v2[j++]);
        }
    }

    while (i < v1.size())
    {
        ans.push_back(v1[i++]);
    }
    while (j < v2.size())
    {
        ans.push_back(v2[j++]);
    }

    return ans;
}

vector<int> mergesort(vector<int> v)
{
    if (v.size() <= 1)
    {
        return v;
    }

    vector<int> v1, v2;
    for (int i = 0; i < v.size() / 2; i++)
    {
        v1.push_back(v[i]);
    }
    for (int i = v.size() / 2; i < v.size(); i++)
    {
        v2.push_back(v[i]);
    }

    v1 = mergesort(v1);
    v2 = mergesort(v2);

    return merge(v1, v2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    v = mergesort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
