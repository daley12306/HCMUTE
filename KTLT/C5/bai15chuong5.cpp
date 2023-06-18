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
    if(n < 4)
    {
        cout << -1;
        return 0;
    }
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
    if(n == k)
    {
        int dem = 0;
        for(int i = 0; i < n; i++)
            if(A[i] == 0 && A[i + 1] == 1) 
                dem++;
        if(dem == 2) 
            xuat();
    }
    else
    {
        for(int i = 0; i <= 1; i++)
        {
            A[k] = i;
            lietKe(k + 1);
        }
    }
}