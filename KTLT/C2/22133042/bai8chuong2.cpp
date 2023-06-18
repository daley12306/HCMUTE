#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int m, n, x, y;
int X[4] = {0, 1, -1, 0};
int Y[4] = {1, 0, 0, -1};
double a[100][100];

bool check(int i, int j)
{
    for(int k = 0; k <= 3; k++)
        if(a[i][j] <= a[X[k] + i][Y[k] + j])
            return false;
    return true;
}

int main()
{
    /// INPUT
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    /// PROCESS
    double mx = INT_MAX;
    for(int i = 0; i <= m + 1; i++) a[i][0] = INT_MIN;
    for(int i = 0; i <= n + 1; i++) a[0][i] = INT_MIN;

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(check(i, j))
            {
                if(mx > a[i][j])
                {
                    mx = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }

    /// OUTPUT
    if(mx == INT_MAX) cout << -1;
    else cout << x - 1 << " " << y - 1;
}