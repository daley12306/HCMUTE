#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

int timMax(int n);

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cout << timMax(n);
}

int timMax(int n)
{
    if(n == 1) return A[0];
    
    int x = timMax(n - 1);
    if(A[n - 1] > x) return A[n - 1];
    else return x;
}