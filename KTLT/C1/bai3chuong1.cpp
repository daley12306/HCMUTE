#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct THOIGIAN
{
    int h, m, s;
};

void nhap(THOIGIAN &x);
void xuat(THOIGIAN x);
bool kiemTra(THOIGIAN x);
THOIGIAN khoangCach(THOIGIAN x, THOIGIAN y);

int main()
{
    THOIGIAN a, b;
    nhap(a);
    nhap(b);
    if(kiemTra(a) && kiemTra(b))
        xuat(khoangCach(a,b));
    else cout << -1;
}

void nhap(THOIGIAN &x)
{
    cin >> x.h >> x.m >> x.s;
}

void xuat(THOIGIAN x)
{
    cout << x.h << " " << x.m << " " << x.s;
}

bool kiemTra(THOIGIAN x)
{
    if((x.s >= 0 && x.s <= 59) && (x.m >= 0 && x.m <= 59) && (x.h >= 0 && x.h <= 23))
        return true;
    return false;
}

THOIGIAN khoangCach(THOIGIAN x, THOIGIAN y)
{
    THOIGIAN khoangcach;
    int sec1 = x.h * 3600 + x.m * 60 + x.s;
    int sec2 = y.h * 3600 + y.m * 60 + y.s;
    int tmp = abs(sec1 - sec2);
    khoangcach.h = tmp / 3600;
    khoangcach.m = (tmp % 3600) / 60;
    khoangcach.s = (tmp % 3600 % 60);
    return khoangcach;
}
