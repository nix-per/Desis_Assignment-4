#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> merge(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            ans.push_back(vec1[i]);
            i++;
        }
        else
        {
            ans.push_back(vec2[j]);
            j++;
        }
    }
    while (i < vec1.size())
    {
        ans.push_back(vec1[i]);
        i++;
    }
    while (j < vec2.size())
    {
        ans.push_back(vec2[j]);
        j++;
    }
    return ans;
}

vector<int> mergesort(vector<int> &vec)
{
    if (vec.size() <= 1)
    {
        return vec;
    }
    vector<int> vec1;
    vector<int> vec2;

    int i = 0;
    for (; i < vec.size() / 2; i++)
    {
        vec1.push_back(vec[i]);
    }
    for (; i < vec.size(); i++)
    {
        vec2.push_back(vec[i]);
    }

    vec1 = mergesort(vec1);
    vec2 = mergesort(vec2);
    return merge(vec1, vec2);
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
        cout << v[i] << " ";
    }
    return 0;
}
