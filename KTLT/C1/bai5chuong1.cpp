#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct SOPHUC
{
    int a, b;
};

void nhap(SOPHUC &x);
void xuat(SOPHUC x);
SOPHUC tong(SOPHUC x, SOPHUC y);
SOPHUC hieu(SOPHUC x, SOPHUC y);
SOPHUC tich(SOPHUC x, SOPHUC y);

int main()
{
    SOPHUC z1, z2;
    nhap(z1);
    nhap(z2);
    xuat(tong(z1, z2));
    xuat(hieu(z1, z2));
    xuat(tich(z1, z2));
}

void nhap(SOPHUC &x)
{
    cin >> x.a >> x.b;
}

void xuat(SOPHUC x)
{
    cout << x.a << " " << x.b << endl;
}

SOPHUC tong(SOPHUC x, SOPHUC y)
{
    SOPHUC kq;
    kq.a = x.a + y.a;
    kq.b = x.b + y.b;
    return kq;
}

SOPHUC hieu(SOPHUC x, SOPHUC y)
{
    SOPHUC kq;
    kq.a = x.a - y.a;
    kq.b = x.b - y.b;
    return kq;
}

SOPHUC tich(SOPHUC x, SOPHUC y)
{
    SOPHUC kq;
    kq.a = x.a * y.a - x.b * y.b;
    kq.b = x.a * y.b + x.b * y.a;
    return kq;
}