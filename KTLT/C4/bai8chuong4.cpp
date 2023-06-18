#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

bool nguyento(int x);
int timMin(int n);

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    cout << timMin(n);
}

bool nguyento(int x)
{
    if(x <= 1) return false;
    for(int i = 2; i <= sqrt(x); i++)
        if(x % i == 0) return false;
    return true;
}

int timMin(int n)
{
    if(n == 1) return A[0];
    
    int x = timMin(n - 1);
    if(nguyento(x) && A[n - 1] > x) return x;
    else return A[n - 1];
}