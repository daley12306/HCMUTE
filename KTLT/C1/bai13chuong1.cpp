#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct SACH
{
    string ma, ten, tacgia;
    int sl;
};

void nhap(SACH &x);
void xuat(SACH x);
void timSach(SACH x[]);
void tongSL(SACH x[]);

int main()
{
    SACH A[105];
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhap(A[i]);
    timSach(A);
    tongSL(A);
}

void nhap(SACH &x)
{
    getline(cin, x.ma);
    getline(cin, x.ten);
    getline(cin, x.tacgia);
    cin >> x.sl;
    cin.ignore();
}

void xuat(SACH x)
{
    cout << x.ma << endl;
    cout << x.ten << endl;
    cout << x.tacgia << endl;
    cout << x.sl << endl;
}

void timSach(SACH x[])
{
    string keyword;
    getline(cin, keyword);
    for(int i = 1; i <= n; i++)
    {
        if(keyword == x[i].ten) 
        {
            xuat(x[i]);
            return;
        }
    }
    cout << "Khong Tim Thay" << endl;
}

void tongSL(SACH x[])
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
        tong += x[i].sl;
    cout << tong << endl;
}