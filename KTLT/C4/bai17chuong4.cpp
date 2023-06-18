#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], B[N], P[N], res[N], mn = INT_MAX;

void nhap();
void xuat();
void lietKe(int k);
void tinhChiPhi();

int main()
{
    nhap();
    lietKe(0);
    cout << "Tong thoi gian: " << mn << endl;
    xuat();
}

void nhap()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
}

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << endl;
}

void lietKe(int k)
{
    if(n == k) tinhChiPhi();
    else
    {
        for(int i = 0; i <= 1; i++)
        {
            P[k] = i;
            lietKe(k + 1);
        }
    }
    
}

void tinhChiPhi()
{
    int ta = 0, tb = 0;
    for(int i = 0; i < n; i++)
        if(P[i] == 0) ta += A[i];
        else tb += B[i];
    
    int tg = max(ta, tb);
    if(mn > tg)
    {
        mn = tg;
        for(int i = 0; i < n; i++)
            res[i] = P[i];
    }
}