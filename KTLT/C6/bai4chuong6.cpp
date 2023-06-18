#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], B[N], check[N];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> A[i];
    int k = 1;
    for(int i = 1; i <= n; i++)
        if(!check[A[i]])
        {
            B[k++] = A[i];
            check[A[i]] = 1;
        }
    for(int i = 1; i < k; i++)
        cout << B[i] << " ";
}