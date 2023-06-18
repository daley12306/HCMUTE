#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct MAYTINH
{
    string loai, noisx;
    int tgbh;
};

void nhap(MAYTINH &x);
void xuat(MAYTINH x);
void tgbh1nam(MAYTINH x[]);
void mayMy(MAYTINH x[]);

int main()
{
    MAYTINH A[1000];
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhap(A[i]);
    tgbh1nam(A);
    mayMy(A);
}

void nhap(MAYTINH &x)
{
    getline(cin, x.loai);
    getline(cin, x.noisx);
    cin >> x.tgbh;
    cin.ignore();
}

void xuat(MAYTINH x)
{
    cout << x.loai << endl;
    cout << x.noisx << endl;
    cout << x.tgbh << endl;
}

void tgbh1nam(MAYTINH x[])
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(x[i].tgbh == 1) cnt++;
    cout << cnt << endl;
}

void mayMy(MAYTINH x[])
{
    for(int i = 1; i <= n; i++)
        if(x[i].noisx == "My") xuat(x[i]);
}