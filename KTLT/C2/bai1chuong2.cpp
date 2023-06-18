#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
const int N = 10e6 + 7;
int n, x, a[N];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    /// INPUT
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];

    /// PROCESS
    a[n] = x;
    int i = 0;
    while(a[i] != x)
        i++;

    /// OUTPUT
    if(i < n) cout << i;
    else cout << -1;
}
