#include <bits/stdc++.h>

using namespace std;

string a, b, s = "";
int dp[2000][2000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    a = " " + a;
    b = " " + b;

    // PROGRESSING
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // BACKTRACKING
    int x = n, y = m;
    while(x >= 1 && y >= 1)
    {
        if(a[x] == b[y])
        {
            s = a[x] + s;
            x--;
            y--;
        }
        else
        {
            if(dp[x][y] == dp[x - 1][y]) x--;
            else y--;
        }
    }
    cout << dp[n][m] << endl << s;
}