#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], x;

int BS(int a[], int x, int l, int r);

int main()
{
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> A[i];
    cout << BS(A, x, 0, n - 1);
}

int BS(int a[], int x, int l, int r)
{
    if(l > r) return -1;
    int m = (l + r) / 2;
    if(a[m] == x) return m;
    if(a[m] > x) return BS(a, x, l, m - 1);
    else return BS(a, x, m + 1, r);
}