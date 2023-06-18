#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], x;

int* insertValue(int n, int a[], int x);

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];
    cin >> x;
    
    sort(A + 1, A + n + 1, greater<int>());

    n++;
    insertValue(n, A, x);
    for(int i = 1; i <= n; i++) cout << A[i] << " ";
}

int* insertValue(int n, int a[], int x)
{
    for(int i = n; i >= 1; i--)
    {
        if(a[i - 1] > x && x > a[i + 1])
        {
            a[i] = x;
            return a;
        }
        a[i] = a[i - 1];
    }
    return a;
}