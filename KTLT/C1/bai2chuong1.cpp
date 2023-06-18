#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const ll N = 1e6 + 7;
ll n;

struct PHANSO
{
    ll t, m;
};

void nhapPS(PHANSO &x);
void xuatPS(PHANSO x);
ll UCLN(ll x, ll y);
void rutgonPS(PHANSO &x);
PHANSO mxPS(PHANSO x[]);
PHANSO tongPS(PHANSO x[]);
PHANSO tichPS(PHANSO x[]);
void nghichdaoPS(PHANSO x[]);

int main()
{
    PHANSO A[100];
    cin >> n;
    for(ll i = 1; i <= n; i++) nhapPS(A[i]);
    xuatPS(mxPS(A));
    xuatPS(tongPS(A));
    xuatPS(tichPS(A));
    nghichdaoPS(A);
}

void nhapPS(PHANSO &x)
{
    cin >> x.t >> x.m;
}

void xuatPS(PHANSO x)
{
    cout << x.t << " " << x.m << endl;
}

ll UCLN(ll x, ll y)
{
    x = abs(x);
    y = abs(y);
    if(x * y == 0) return x + y;
    while(x != y)
    {
        if(x > y) x -= y;
        else y -= x;
    }
    return x;
}

ll BCNN(ll x, ll y)
{
    return (x * y) / UCLN(x, y);
}

void rutgonPS(PHANSO &x)
{
    ll uc = UCLN(x.t, x.m);
    x.t /= uc;
    x.m /= uc;
    if(x.m < 0)
    {
        x.t *= -1;
        x.m *= -1;
    }
}

PHANSO mxPS(PHANSO x[])
{
    PHANSO kq;
    double mx = INT_MIN;
    for(ll i = 1; i <= n; i++)
    {
        if((double)x[i].t / x[i].m > mx)
        {
            mx = (double)x[i].t / x[i].m;
            kq.t = x[i].t;
            kq.m = x[i].m;
        }
    }
    rutgonPS(kq);
    return kq;
}

PHANSO tongPS(PHANSO x[])
{
    PHANSO kq;
    kq.t = x[1].t;
    kq.m = x[1].m;
    for(ll i = 2; i <= n; i++)
    {
        if(kq.m != x[i].m)
        {
            ll bc = BCNN(kq.m, x[i].m);
            kq.t = kq.t * (bc / kq.m) + x[i].t * (bc / x[i].m);
            kq.m = bc;
        }
        else kq.t += x[i].t;
    }
    rutgonPS(kq);
    return kq;
}

PHANSO tichPS(PHANSO x[])
{
    PHANSO kq;
    kq.t = x[1].t;
    kq.m = x[1].m;
    for(ll i = 2; i <= n; i++)
    {
        kq.t *= x[i].t;
        kq.m *= x[i].m;
        rutgonPS(kq);
    }
    return kq;
}

void nghichdaoPS(PHANSO x[])
{
    for(ll i = 1; i <= n - 1; i++)
    {
        swap(x[i].t, x[i].m);
        rutgonPS(x[i]);
        cout << x[i].t << " " << x[i].m << " ";
    }
    swap(x[n].t, x[n].m);
    rutgonPS(x[n]);
    cout << x[n].t << " " << x[n].m;
}