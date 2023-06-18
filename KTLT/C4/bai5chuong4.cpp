#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
ll k, n;

ll toHop(ll k, ll n);

int main()
{
    cin >> n >> k;
    cout << toHop(k, n);
}

ll toHop(ll k, ll n)
{
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}