#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

void xuat();
void sinhNhiPhan(int n);

int main()
{
    cin >> n;
    sinhNhiPhan(n);
}

void sinhNhiPhan(int n)
{
    int i;
    do
    {
        i = n - 1;
        xuat();
        while(i >= 0 && A[i] == 1)
        {
            A[i] = 0;
            i--;
        }
        if(i >= 0) A[i] = 1;
    } while (i >= 0);
}

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}