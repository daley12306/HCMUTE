#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, a[N], b[N], c[N];

int main()
{
    /// INPUT
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    /// PROCESS
    for(int i = 1, j = 1; i <= n && j <= 2 * n; i++, j += 2)
    {
        c[j] = a[i];
        c[j + 1] = b[i];
    }

    /// OUTPUT
    for(int i = 1; i <= 2 * n; i++)
        cout << c[i] << " ";
}