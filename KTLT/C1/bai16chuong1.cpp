#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct HANG
{
    string ma, ten;
    int soluong, ton, tgbh;
    double dongia;
};

void nhap(HANG &x);
string tonNhieu(HANG x[]);
string tonIt(HANG x[]);
string giaCao(HANG x[]);
void tgbh12(HANG x[]);
void sapxep(HANG x[]);
bool cmp(HANG x, HANG y);
void xuatmang(HANG x[]);

int main()
{
    HANG A[1000];
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhap(A[i]);
    cout << tonNhieu(A) << endl;
    cout << tonIt(A) << endl;
    cout << giaCao(A) << endl;
    tgbh12(A);
    sapxep(A);
    xuatmang(A);
}

void nhap(HANG &x)
{
    getline(cin, x.ma);
    getline(cin, x.ten);
    cin >> x.soluong;
    cin >> x.dongia;
    cin >> x.ton >> x.tgbh;
    cin.ignore();
    //cout << x.ma << " " << x.ten << " " << x.soluong << " " << x.dongia << " " << x.ton << " " << x.tgbh;
}

string tonNhieu(HANG x[])
{
    int id = 1, mx = x[1].ton;
    for(int i = 2; i <= n; i++)
    {
        if(mx < x[i].ton)
        {
            mx = x[i].ton;
            id = i;
        }
    }
    return x[id].ten;
}

string tonIt(HANG x[])
{
    int id = 1, mn = x[1].ton;
    for(int i = 2; i <= n; i++)
    {
        if(mn > x[i].ton)
        {
            mn = x[i].ton;
            id = i;
        }
    }
    return x[id].ten;
}

string giaCao(HANG x[])
{
    int id = 1, mx = x[1].dongia;
    for(int i = 2; i <= n; i++)
    {
        if(mx < x[i].dongia)
        {
            mx = x[i].dongia;
            id = i;
        }
    }
    return x[id].ten;
}

void tgbh12(HANG x[])
{
    for(int i = 1; i < n; i++)
        if(x[i].tgbh > 12) cout << x[i].ten << " ";
    if(x[n].tgbh > 12) cout << x[n].ten;
    cout << endl;
}

void sapxep(HANG x[])
{
    sort(x + 1, x + n + 1, cmp);
}

bool cmp(HANG x, HANG y)
{
    return x.ton < y.ton;
}

void xuatmang(HANG x[])
{
    for(int i = 1; i < n; i++)
        cout << x[i].ten << " ";
    cout << x[n].ten;
}