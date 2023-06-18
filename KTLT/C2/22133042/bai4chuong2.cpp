#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int m, n, a[1000][1000], b[N];

int main()
{
    /// INPUT
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    /// PROCESS
    int k = 1;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }

    /// OUTPUT
    for(int i = 1; i <= m * n; i++)
        cout << b[i] << " ";
}