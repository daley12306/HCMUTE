#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], B[N];

void xuat();
void lietKeHV(int k);

int main()
{
    cin >> n;
    lietKeHV(0);
}

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}

void lietKeHV(int k)
{
    if(n == k)
        xuat();
    else
    {
        for(int i = 0; i < n; i++)
            if(B[i] == 0)
            {
                A[i] = k;
                B[i] = 1;
                lietKeHV(k + 1);
                B[i] = 0;
            }
    }
}