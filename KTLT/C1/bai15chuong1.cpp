#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct LINHKIEN
{
    string ten, quycach, loai;
    int dongia1, dongia2;
};

void nhap(LINHKIEN &x);
void xuat(LINHKIEN x);
void sapxepXuat(LINHKIEN x[]);
bool cmp(LINHKIEN a, LINHKIEN b);
void check(LINHKIEN x[]);

int main()
{
    LINHKIEN A[1000];
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhap(A[i]);
    sapxepXuat(A);
    check(A);
}

void nhap(LINHKIEN &x)
{
    getline(cin, x.ten);
    getline(cin, x.quycach);
    getline(cin, x.loai);
    cin >> x.dongia1;
    cin >> x.dongia2;
    cin.ignore();
}

void xuat(LINHKIEN x)
{
    cout << x.ten << endl;
    cout << x.quycach << endl;
    cout << x.loai << endl;
    cout << x.dongia1 << endl;
    cout << x.dongia2 << endl;
}

void sapxepXuat(LINHKIEN x[])
{
    sort(x + 1, x + n + 1, cmp);
    for(int i = 1; i <= n; i++) xuat(x[i]);
}

bool cmp(LINHKIEN a, LINHKIEN b)
{
    if(a.loai == b.loai) return a.ten < b.ten;
    return a.loai < b.loai;
}

void check(LINHKIEN x[])
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(x[i].loai == "A") cnt++;
    if(cnt >= 10) cout << "Du" << endl;
    else cout << "Khong du" << endl;
}