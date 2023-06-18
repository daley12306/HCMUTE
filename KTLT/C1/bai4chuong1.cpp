#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct DATE
{
    int d, m, y;
};

void nhap(DATE &x);
void xuat(DATE x);
bool kiemTra(DATE x);
int soNamNhuan(DATE x);
int khoangCach(DATE x, DATE y);

int main()
{
    DATE a, b;
    nhap(a);
    nhap(b);
    if(kiemTra(a) && kiemTra(b))
        cout << khoangCach(a, b);
    else cout << -1;
}

void nhap(DATE &x)
{
    cin >> x.d >> x.m >> x.y;
}

void xuat(DATE x)
{
    cout << x.d << " " << x.m << " " << x.y << " ";
}

bool namNhuan(int x)
{
    return x % 4 == 0 && x % 100 != 0;
}

bool kiemTra(DATE x)
{
    if(x.d < 1 || x.m < 1 || x.m > 12 || x.y < 1) return false;
    if(x.m == 2 && namNhuan(x.y))
    {
        if(x.d > 29) return false;
    }
    else if(x.d > daysOfMonth[x.d]) return false;
    return true;
}

int soNamNhuan(DATE x)
{
    int y = x.y;
    if(x.m <= 2) y--;
    return y / 4 - y / 100 + y / 400;
}

int khoangCach(DATE x, DATE y)
{
    int kc1 = x.y * 365 + x.d;
    for(int i = 1; i < x.m; i++)
        kc1 += daysOfMonth[i];
    kc1 += soNamNhuan(x);

    int kc2 = y.y * 365 + y.d;
    for(int i = 1; i < y.m; i++)
        kc2 += daysOfMonth[i];
    kc2 += soNamNhuan(y);

    return abs(kc1 - kc2);
}