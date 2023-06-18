#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, x, a[N];

int bs()
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x) return m;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main()
{
    /// INPUT
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];

    /// OUTPUT
    cout << bs();
}