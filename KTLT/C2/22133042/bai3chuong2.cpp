#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, a[N], pos, val, x;

void print(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    /// ADD
    cin >> pos >> val;
    if(pos >= 0 && pos <= n)
    {
        for(int i = n; i >= pos; i--)
            a[i] = a[i - 1];
        a[pos] = val;
        n++;
    }
    print(a, n);

    /// REPLACE
    cin >> pos >> val;
    if(pos >= 0 && pos < n)
        a[pos] = val;
    print(a, n);

    /// DELETE
    cin >> pos;
    if(pos < n)
    {
        n--;
        for(int i = pos; i <= n; i++)
            a[i] = a[i + 1];
    }
    print(a, n);

    /// SEARCH
    cin >> x;
    int i = 0;
    a[n] = x;
    while(a[i] != x)
        i++;
    if(i < n) cout << i;
    else cout << -1;
}