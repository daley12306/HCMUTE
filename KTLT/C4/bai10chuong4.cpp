#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], d[N], val, mx = -1;

int mostFrequent(int A[], int d[], int id);

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> A[i];
    sort(A + 1, A + n + 1, greater<int>());
    cout << mostFrequent(A, d, n);
}

int mostFrequent(int A[], int d[], int id)
{
    if(id > 0)
    {
        d[A[id]]++;
        if(mx < d[A[id]]) 
        {
            mx = d[A[id]];
            val = A[id];
        }
        return mostFrequent(A, d, id - 1);
    }
    else return val;
}