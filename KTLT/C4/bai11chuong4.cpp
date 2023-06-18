#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

void xuat();
void lietKe(int k);

int main()
{
    cin >> n;
    lietKe(0);
}

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}

void lietKe(int k)
{
    if(n == k) xuat();
    else
    {
        for(int i = 0; i <= 1; i++)
        {
            A[k] = i;
            lietKe(k + 1);
        }
    }
    
}