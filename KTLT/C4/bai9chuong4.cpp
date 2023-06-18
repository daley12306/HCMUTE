#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

int UCLN(int a, int b);
int arrayUCLN(int a[], int l, int r);

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];
    cout << arrayUCLN(A, 1, n);
}

int UCLN(int a, int b)
{
    if(b != 0) return UCLN(b, a % b);
    else return a;
}

int arrayUCLN(int a[], int l, int r)
{
    if(l + 1 == r)
    {
        int x = a[l], y = a[r];
        return UCLN(x, y);
    }
    int x = a[l], y = arrayUCLN(a, l + 1, r);
    return UCLN(x, y);
}