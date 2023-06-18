#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

int sumArr(int n, int A[]);

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    cout << sumArr(n, A);
}

int sumArr(int n, int A[])
{
    if(n <= 0) return 0;
    return sumArr(n - 1, A) + A[n - 1];
}