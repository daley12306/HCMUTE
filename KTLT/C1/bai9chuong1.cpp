#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;

struct SOPHUC
{
    int a, b;
};

void nhap(SOPHUC &x);
void xuat(SOPHUC x);
SOPHUC tong(SOPHUC X[]);
SOPHUC tich(SOPHUC X[]);

int main()
{
    SOPHUC A[100];
    cin >> n;
    for(int i = 1; i <= n; i++) nhap(A[i]);
    xuat(tong(A));
    xuat(tich(A));
}

void nhap(SOPHUC &x)
{
    cin >> x.a >> x.b;
}

void xuat(SOPHUC x)
{
    cout << x.a << " " << x.b << endl;
}

SOPHUC tong(SOPHUC X[])
{
    SOPHUC kq;
    kq.a = X[1].a;
    kq.b = X[1].b;
    for(int i = 2; i <= n; i++)
    {
        kq.a += X[i].a;
        kq.b += X[i].b;
    }
    return kq;
}

SOPHUC tich(SOPHUC X[])
{
    SOPHUC kq;
    int tmpa, tmpb;
    kq.a = X[1].a;
    kq.b = X[1].b;
    for(int i = 2; i <= n; i++)
    {
        tmpa = kq.a * X[i].a - kq.b * X[i].b;
        tmpb = kq.a * X[i].b + kq.b * X[i].a;
        kq.a = tmpa;
        kq.b = tmpb;
    }
    return kq;
}