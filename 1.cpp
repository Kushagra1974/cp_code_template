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
    // cin >> n;
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
    vvi grid = gridInp(3, 3);
    vvi cord = {{0, 0}, {0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vvi count(3, vi(3, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < cord.size(); k++)
            {
                vi cor = cord[k];
                int newx = cor[0] + i;
                int newy = cor[1] + j;
                if (newx >= 0 && newx < 3 && newy >= 0 && newy < 3)
                {
                    count[newx][newy] += grid[i][j];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << 1 - count[i][j] % 2;
        }
        cout << endl;
    }
}
