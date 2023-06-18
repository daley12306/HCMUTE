#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const ll N = 1e6 + 7;

struct PHANSO
{
    ll t, m;
};

void nhapPS(PHANSO &x);
void xuatPS(PHANSO x);
ll UCLN(ll x, ll y);
void rutgonPS(PHANSO &x);
void quydongPS(PHANSO &x, PHANSO &y);
PHANSO tongPS(PHANSO x, PHANSO y);
PHANSO hieuPS(PHANSO x, PHANSO y);
PHANSO tichPS(PHANSO x, PHANSO y);
PHANSO thuongPS(PHANSO x, PHANSO y);
int sosanhPS(PHANSO x, PHANSO y);

int main()
{
    PHANSO a, b;
    nhapPS(a);
    nhapPS(b);
    xuatPS(tongPS(a, b));
    xuatPS(hieuPS(a, b));
    xuatPS(tichPS(a, b));
    if(b.t != 0 && b.m != 0) xuatPS(thuongPS(a, b));
    else cout << -1;
    cout << sosanhPS(a, b);
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

void quydongPS(PHANSO &x, PHANSO &y)
{
    ll bc = BCNN(x.m, y.m);
    x.t *= (bc / x.m);
    y.t *= (bc / y.m);
    x.m = bc;
    y.m = bc;
}

PHANSO tongPS(PHANSO x, PHANSO y)
{
    PHANSO kq;
    if(x.m != y.m) quydongPS(x, y);
    kq.m = x.m;
    kq.t = x.t + y.t;
    rutgonPS(kq);
    return kq;
}

PHANSO hieuPS(PHANSO x, PHANSO y)
{
    PHANSO kq;
    if(x.m != y.m) quydongPS(x, y);
    kq.m = x.m;
    kq.t = x.t - y.t;
    rutgonPS(kq);
    return kq;
}

PHANSO tichPS(PHANSO x, PHANSO y)
{
    PHANSO kq;
    kq.t = x.t * y.t;
    kq.m = x.m * y.m;
    rutgonPS(kq);
    return kq;
}

PHANSO thuongPS(PHANSO x, PHANSO y)
{
    PHANSO kq;
    kq.t = x.t * y.m;
    kq.m = x.m * y.t;
    rutgonPS(kq);
    return kq;
}

int sosanhPS(PHANSO x, PHANSO y)
{
    quydongPS(x, y);
    if(x.t < y.t) return -1;
    else if(x.t > y.t) return 1;
    else return 0;
}