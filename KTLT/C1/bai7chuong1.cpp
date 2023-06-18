#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const ll N = 1e6 + 7;

struct PHANSO
{
    ll t, m;
};

struct HONSO
{
    ll nguyen;
    PHANSO ps;
};

void nhapPS(PHANSO &x);
void xuatPS(PHANSO x);
void nhapHS(HONSO &x);
void xuatHS(HONSO x);
ll UCLN(ll x, ll y);
void rutgonPS(PHANSO &x);
void quydongPS(PHANSO &x, PHANSO &y);
PHANSO tongPS(PHANSO x, PHANSO y);
PHANSO tichPS(PHANSO x, PHANSO y);
PHANSO chuyenHSthanhPS(HONSO x);
HONSO chuyenPSthanhHS(PHANSO x);
HONSO tongHS(HONSO x, HONSO y);
HONSO tichHS(HONSO x, HONSO y);

int main()
{
    HONSO a, b;
    nhapHS(a);
    nhapHS(b);
    xuatHS(tongHS(a, b));
    xuatHS(tichHS(a, b));
}

void nhapPS(PHANSO &x)
{
    cin >> x.t >> x.m;
}

void xuatPS(PHANSO x)
{
    cout << x.t << " " << x.m << endl;
}

void nhapHS(HONSO &x)
{
    cin >> x.nguyen;
    nhapPS(x.ps);
}

void xuatHS(HONSO x)
{
    cout << x.nguyen << " ";
    xuatPS(x.ps);
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

PHANSO tichPS(PHANSO x, PHANSO y)
{
    PHANSO kq;
    kq.t = x.t * y.t;
    kq.m = x.m * y.m;
    rutgonPS(kq);
    return kq;
}

PHANSO chuyenHSthanhPS(HONSO x)
{
    PHANSO kq;
    kq.t = x.nguyen * x.ps.m + x.ps.t;
    kq.m = x.ps.m;
    return kq;
}

HONSO chuyenPSthanhHS(PHANSO x)
{
    HONSO kq;
    kq.nguyen = x.t / x.m;
    kq.ps.t = x.t % x.m;
    kq.ps.m = x.m;
    return kq;
}

HONSO tongHS(HONSO x, HONSO y)
{
    PHANSO a, b, tong;
    a = chuyenHSthanhPS(x);
    b = chuyenHSthanhPS(y);
    tong = tongPS(a, b);
    HONSO kq = chuyenPSthanhHS(tong);
    return kq;
}

HONSO tichHS(HONSO x, HONSO y)
{
    PHANSO a, b, tich;
    a = chuyenHSthanhPS(x);
    b = chuyenHSthanhPS(y);
    tich = tichPS(a, b);
    HONSO kq = chuyenPSthanhHS(tich);
    return kq;
}