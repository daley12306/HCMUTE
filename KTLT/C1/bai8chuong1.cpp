#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;

struct TOADO
{
    int x, y;
};

void nhapTD(TOADO &x);
void xuatTD(TOADO x);
TOADO dxTrucOx(TOADO x);
TOADO dxTrucOy(TOADO x);
TOADO dxGocO(TOADO x);
double khoangcach(TOADO x, TOADO y);

int main()
{
    TOADO a, b;
    nhapTD(a);
    nhapTD(b);
    xuatTD(dxTrucOx(a));
    xuatTD(dxTrucOy(a));
    xuatTD(dxGocO(a));
    cout << khoangcach(a, b);
}

void nhapTD(TOADO &x)
{
    cin >> x.x >> x.y;
}

void xuatTD(TOADO x)
{
    cout << x.x << " " << x.y << endl;
}

TOADO dxTrucOx(TOADO x)
{
    TOADO kq;
    kq.x = x.x;
    kq.y = -x.y;
    return kq;
}

TOADO dxTrucOy(TOADO x)
{
    TOADO kq;
    kq.x = -x.x;
    kq.y = x.y;
    return kq;
}

TOADO dxGocO(TOADO x)
{
    TOADO kq;
    kq.x = -x.x;
    kq.y = -x.y;
    return kq;
}

double khoangcach(TOADO x, TOADO y)
{
    return sqrt((x.x - y.x) * (x.x - y.x) + (x.y - y.y) * (x.y - y.y));
}