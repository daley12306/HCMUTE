#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int m, n, a[N], b[1000][1000];

int main()
{
    /// INPUT
    cin >> m >> n;
    for(int i = 1; i <= m * n; i++) cin >> a[i];

    /// PROCESS
    int k = 1;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[i][j] = a[k];
            k++;
        }
    }

    /// OUTPUT
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}