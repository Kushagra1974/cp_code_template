#include <bits/stdc++.h>
#include <unordered_set>

#define ll long long
#define vvi vector<vector<int>>
#define vi vector<int>

using namespace std;

void solve();

int main()
{
    int n = 1;
    cin >> n;
    while (n--)
    {
        solve();
    }
}

vvi gridInp(int r, int c)
{
    vvi inp(r, vi(c, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> inp[i][j];
        }
    }
    return inp;
}

void solve()
{
}
